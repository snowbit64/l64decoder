// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeRestrictionMetal
// Entry Point: 00c31ae4
// Size: 824 bytes
// Signature: undefined __cdecl makeRestrictionMetal(ConversionContext * param_1, vector * param_2, uint param_3, uint param_4, basic_string * param_5)


/* IR_HllConvertUtil::makeRestrictionMetal(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> >&, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void IR_HllConvertUtil::makeRestrictionMetal
               (ConversionContext *param_1,vector *param_2,uint param_3,uint param_4,
               basic_string *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  basic_string *pbVar8;
  ulong uVar9;
  int iVar10;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar8 = param_5;
  piVar6 = (int *)IR_RegisterSet::getRegisterType
                            ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),param_4);
  piVar7 = (int *)IR_RegisterSet::getRegisterType
                            ((IR_RegisterSet *)(*(long *)(param_1 + 8) + 0x98),param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_5);
  getFieldValue((IR_HllConvertUtil *)param_1,(ConversionContext *)param_2,(vector *)(ulong)param_3,
                (uint)piVar6,(IR_Type *)pbVar8);
  iVar1 = *piVar6;
  if (iVar1 == 2) {
    uVar2 = piVar6[4];
    iVar1 = piVar6[5];
    uVar3 = piVar7[4];
                    /* try { // try from 00c31c78 to 00c31c87 has its CatchHandler @ 00c31e50 */
    IR_Type::getTypeString((uint)piVar6);
    pvVar5 = (void *)((ulong)local_80 | 1);
    if ((local_80[0] & 1) != 0) {
      pvVar5 = local_70;
    }
                    /* try { // try from 00c31ca4 to 00c31cab has its CatchHandler @ 00c31e20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_5,(ulong)pvVar5);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00c31cbc to 00c31ccb has its CatchHandler @ 00c31e54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_5);
    if (iVar1 != 0) {
      iVar10 = 0;
      do {
                    /* try { // try from 00c31ce0 to 00c31d43 has its CatchHandler @ 00c31e64 */
        FUN_00c2f578(local_80,4,&DAT_004cf2ba,iVar10);
        pvVar5 = (void *)((ulong)local_98 | 1);
        if ((local_98[0] & 1) != 0) {
          pvVar5 = local_88;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_5,(ulong)pvVar5);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_5);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_5);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_5);
                    /* try { // try from 00c31d50 to 00c31d5f has its CatchHandler @ 00c31e5c */
        if ((uVar2 < uVar3) &&
           (std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)param_5), uVar9 = (ulong)uVar2, uVar2 != 0)) {
          do {
                    /* try { // try from 00c31d74 to 00c31d7b has its CatchHandler @ 00c31e68 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)param_5);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
                    /* try { // try from 00c31d9c to 00c31da3 has its CatchHandler @ 00c31e64 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_5);
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar1);
    }
                    /* try { // try from 00c31db0 to 00c31dbf has its CatchHandler @ 00c31e54 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_5);
  }
  else if (iVar1 == 1) {
    pvVar5 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar5 = local_88;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_5,(ulong)pvVar5);
    if (*piVar7 == 1) {
      uVar2 = piVar6[5];
      uVar9 = (ulong)uVar2;
                    /* try { // try from 00c31c18 to 00c31c27 has its CatchHandler @ 00c31e1c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_5);
      if (uVar2 != 0) {
        do {
                    /* try { // try from 00c31c38 to 00c31c3f has its CatchHandler @ 00c31e60 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)param_5);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  else if (iVar1 == 0) {
    pvVar5 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar5 = local_88;
    }
                    /* try { // try from 00c31bb0 to 00c31c07 has its CatchHandler @ 00c31e58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_5,(ulong)pvVar5);
    if (*piVar7 == 2) {
                    /* try { // try from 00c31dc4 to 00c31dd3 has its CatchHandler @ 00c31e58 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_5);
    }
    else if (*piVar7 == 1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_5);
    }
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


