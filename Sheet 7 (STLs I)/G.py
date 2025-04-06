from collections import deque

num_queries = int(input())  
queue = deque()
flip = False  
output = []  

for _ in range(num_queries):
    command = input().split()

    if command[0] == "toFront":
        value = int(command[1])
        if flip:
            queue.append(value)  
        else:
            queue.appendleft(value)  

    elif command[0] == "push_back":
        value = int(command[1])
        if flip:
            queue.appendleft(value)  
        else:
            queue.append(value)  

    elif command[0] == "front":
        if not queue:
            output.append("No job for Ada?")
        else:
            if flip:
                output.append(str(queue.pop()))  
            else:
                output.append(str(queue.popleft()))  

    elif command[0] == "back":
        if not queue:
            output.append("No job for Ada?")
        else:
            if flip:
                output.append(str(queue.popleft()))  
            else:
                output.append(str(queue.pop()))  

    elif command[0] == "reverse":
        flip = not flip  

print("\n".join(output))
