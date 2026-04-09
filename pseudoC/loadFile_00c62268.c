// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFile
// Entry Point: 00c62268
// Size: 392 bytes
// Signature: undefined __cdecl loadFile(char * param_1, uchar * * param_2, uint * param_3, uint param_4)


/* NativeFileUtil::loadFile(char const*, unsigned char*&, unsigned int&, unsigned int) */

undefined4 NativeFileUtil::loadFile(char *param_1,uchar **param_2,uint *param_3,uint param_4)

{
  ACCESS_MODE AVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  size_t __n;
  ulong uVar5;
  uchar *puVar6;
  undefined4 uVar7;
  ACCESS_MODE AVar8;
  void *__dest;
  NativeFile aNStack_98 [40];
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00c622f0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_70 = uVar5 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_00c622f0:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00c62304 to 00c6230b has its CatchHandler @ 00c6240c */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_70);
  uVar5 = local_70;
  *param_2 = (uchar *)0x0;
  AVar8 = (ACCESS_MODE)local_60;
  *param_3 = 0;
                    /* try { // try from 00c6231c to 00c62323 has its CatchHandler @ 00c62408 */
  NativeFile::NativeFile(aNStack_98);
  AVar1 = (uint)&local_70 | 1;
  if ((uVar5 & 1) != 0) {
    AVar1 = AVar8;
  }
                    /* try { // try from 00c62334 to 00c62343 has its CatchHandler @ 00c623f8 */
  uVar5 = NativeFile::open((char *)aNStack_98,AVar1,false);
                    /* try { // try from 00c62348 to 00c6234f has its CatchHandler @ 00c623f0 */
  if (((uVar5 & 1) != 0) && (uVar3 = NativeFile::getSize(), -1 < (int)uVar3)) {
                    /* try { // try from 00c6235c to 00c62377 has its CatchHandler @ 00c623f4 */
    puVar6 = (uchar *)operator_new__((ulong)(uVar3 + param_4));
    if ((uVar3 == 0) || (uVar4 = NativeFile::read(aNStack_98,puVar6,uVar3), uVar4 == uVar3)) {
      uVar7 = 1;
      *param_3 = uVar3;
      *param_2 = puVar6;
      goto LAB_00c6239c;
    }
    operator_delete__(puVar6);
  }
  uVar7 = 0;
LAB_00c6239c:
  NativeFile::~NativeFile(aNStack_98);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


