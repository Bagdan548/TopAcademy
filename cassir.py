x = int (input ('Сколько сдачи следует вернуть покупателю?: '))
print ('Следует сдать:')
print ('банкнот по 2000 руб. -', x // 2000, 'шт.')
x %= 2000
print ('банкнот по 1000 руб. -', x // 1000, 'шт.')
x %= 1000
print ('банкнот по 500 руб. -', x // 500, 'шт.')
x %= 500
print ('банкнот по 100 руб. -', x // 100, 'шт.')
x %= 100
print ('банкнот по 50 руб. -', x // 50, 'шт.')
x %= 50
print ('банкнот по 10 руб. -', x // 10, 'шт.')
x %= 10
print ('монетами -', x, 'руб.')