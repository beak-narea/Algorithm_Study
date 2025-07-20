def solution(board, moves):
    stack = []
    count = 0
    
    for move in moves:
        for row in board:
            if row[move - 1] != 0:
                picked = row[move - 1]
                row[move - 1] = 0
                if stack and stack[-1] == picked:
                    stack.pop()
                    count += 2
                else:
                    stack.append(picked)
                break
    return count
