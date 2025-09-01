#!/usr/bin/env python3
"""
Repository-root wrapper for `nucleusrv/simulate.py`.
Run this from the repo root to forward arguments to the real simulate script inside `nucleusrv`.
Example:
  python3 simulate.py nucleusrv/tools/tests/babykyber/babykyber.c

This wrapper intentionally avoids duplicating logic — it simply calls the inner script so updates stay centralized.
"""
import sys
from subprocess import run

def main():
    if len(sys.argv) == 1:
        # No arguments: default to running babykyber.c
        default_prog = "nucleusrv/tools/tests/babykyber/babykyber.c"
        print(f"[simulate.py] No arguments given. Running default: {default_prog}\n(To run a different test, pass a path as argument or run nucleusrv/simulate.py directly.)")
        cmd = ["python3", "nucleusrv/simulate.py", default_prog]
    else:
        # Forward all arguments
        cmd = ["python3", "nucleusrv/simulate.py"] + sys.argv[1:]
    rc = run(cmd)
    sys.exit(rc.returncode)

if __name__ == '__main__':
    main()
