#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    arg_count = len(sys.argv) - 1

    if arg_count == 0:
        sys.stdout.write("0 arguments.\n")
    else:
        sys.stdout.write("{} argument{}".format(arg_count, 's' if arg_count != 1 else ''))
        sys.stdout.write(":\n")
        for i in range(1, arg_count + 1):
            sys.stdout.write("{}: {}\n".format(i, sys.argv[i]))

