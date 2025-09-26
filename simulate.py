#!/usr/bin/env python3
"""
Repository-root wrapper for `nucleusrv/simulate.py`.
Run this from the repo root to forward arguments to the real simulate script inside `nucleusrv`.
Example:
  python3 simulate.py ../XSoC-SDK/src/babykyber.c

This wrapper intentionally avoids duplicating logic — it simply calls the inner script so updates stay centralized.
"""
import sys
from subprocess import run

def main():
    if len(sys.argv) == 1:
        # No arguments: default to running kyber_demo.c from XSoC-SDK
        default_prog = "XSoC-SDK/examples/kyber_demo.c"
        print(f"[simulate.py] No arguments given. Running default: {default_prog}")
        print("(To run a different test, pass a path as argument or run nucleusrv/simulate.py directly.)")
        cmd = ["python3", "nucleusrv/simulate.py", default_prog]
    else:
        # Adjust paths that start with 'tools/' to be relative to nucleusrv
        adjusted_args = []
        for arg in sys.argv[1:]:
            if arg.startswith('tools/'):
                adjusted_args.append('nucleusrv/' + arg)
            else:
                adjusted_args.append(arg)
        # Forward adjusted arguments
        cmd = ["python3", "nucleusrv/simulate.py"] + adjusted_args
    rc = run(cmd)
    sys.exit(rc.returncode)

if __name__ == '__main__':
    main()
