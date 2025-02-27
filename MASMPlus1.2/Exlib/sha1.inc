;SHA1算法函数
;作者：狂编，hg-soft@263.net
;http://www.aogosoft.com
;#####################################################

;SHA1_GetCode 一次性提交计算使用的函数

SHA1_GetCode PROTO  pSrc:DWORD,nSize:DWORD,pDest:DWORD

;SHA1_EnCode 分段提交计算使用的函数，比如当你以内存映射打开文件时就可以使用这个函数。

SHA1_EnCode PROTO pSrc:DWORD,nSize:DWORD,nTotal:DWORD,pDest:DWORD,nSlice:DWORD
;参数说明：
;	pSrc,用来计算的数据起始地址
;	nSize,本次提交的数据字节数。当nSlice=1或2时，该值必须是64的整倍数
;	nTotal,参加计算的数据总字节数。比如你想计算一个文件时，nTotal就是文件的总长度。
;	pDest,用来输出结果的 20 字节的缓冲区地址
;	nSlice,提交数据分段,0=数据不分段,1=数据开始段,2=数据中间段,3=数据结束段,(当一次性提交时该值应等于0)

;注意：数据开始段和中间段,nSize必须以64字节(40h)对齐
