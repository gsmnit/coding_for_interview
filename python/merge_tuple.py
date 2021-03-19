def merge_meet(meetings):
    m1 = meetings[0]
    m2 = meetings[1]
    if m1[0] <= m2[0] and m1[1] >= m2[0]:
        if m2[1] < m1[1]:
            return m1
        else:
            return [m1[0],m2[1]]
    else :
        return meetings

def main():
    meetings = [[1,2],[3,5]]
    merge_meeting = merge_meet(meetings)
    print(merge_meeting)

if __name__ == '__main__':
    main()