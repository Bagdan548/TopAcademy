nums = [3, 5, 1, 4, 10]

target = 8

def twoSum(nums, target):
    answer = 'В массиве нет такой пары чисел'
    for i in range(len(nums) - 1):
        for j in range(i + 1, len(nums)):
            if target == nums[i] + nums[j]:
                
                answer = 'Индексы чисел, которые в сумме дают target: ' + str(i) + ' и ' + str(j)
    return answer


print(twoSum(nums, target))