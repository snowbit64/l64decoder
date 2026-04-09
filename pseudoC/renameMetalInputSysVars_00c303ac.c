// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renameMetalInputSysVars
// Entry Point: 00c303ac
// Size: 348 bytes
// Signature: undefined __thiscall renameMetalInputSysVars(IR_HllConvertUtil * this, ConversionContext * param_1, basic_string param_2)


/* IR_HllConvertUtil::renameMetalInputSysVars(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
IR_HllConvertUtil::renameMetalInputSysVars
          (IR_HllConvertUtil *this,ConversionContext *param_1,basic_string param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *in_x8;
  undefined8 uVar8;
  ConversionContext *__s2;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte local_80;
  undefined4 local_7f;
  undefined4 uStack_7b;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(*(long *)(this + 8) + 0x68);
  lVar2 = *(long *)(*(long *)(this + 8) + 0x70) - lVar1;
  if (lVar2 != 0) {
    uVar9 = 0;
    __s2 = *(ConversionContext **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
    }
    do {
      iVar4 = strcmp(*(char **)(lVar1 + uVar9 * 0x20),(char *)__s2);
      if ((((iVar4 == 0) && (pcVar7 = *(char **)(lVar1 + uVar9 * 0x20 + 8), pcVar7 != (char *)0x0))
          && (lVar5 = getSystemVariableInfo((ShaderLanguage *)(this + 0x10),pcVar7), lVar5 != 0)) &&
         (*(char *)(lVar5 + 0x18) != '\0')) {
        local_80 = 0xe;
        local_7f = 0x56737953;
        uStack_7b = 0x5f7261;
                    /* try { // try from 00c30484 to 00c3048f has its CatchHandler @ 00c30508 */
        puVar6 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 append((char *)&local_80,(ulong)__s2);
        uVar8 = puVar6[2];
        uVar11 = puVar6[1];
        uVar10 = *puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        in_x8[2] = uVar8;
        in_x8[1] = uVar11;
        *in_x8 = uVar10;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        goto LAB_00c304d4;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(lVar2 >> 5));
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  in_x8[1] = uVar11;
  *in_x8 = uVar10;
  in_x8[2] = uVar8;
LAB_00c304d4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


