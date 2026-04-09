// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addField
// Entry Point: 00aa8a90
// Size: 832 bytes
// Signature: undefined __thiscall addField(ShaderStructLayout * this, char * param_1, BasicType param_2, uint param_3, uint param_4, bool param_5, uint param_6)


/* ShaderStructLayout::addField(char const*, ShaderStructLayout::BasicType, unsigned int, unsigned
   int, bool, unsigned int) */

void __thiscall
ShaderStructLayout::addField
          (ShaderStructLayout *this,char *param_1,BasicType param_2,uint param_3,uint param_4,
          bool param_5,uint param_6)

{
  basic_string *pbVar1;
  ShaderStructLayout SVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  basic_string *pbVar10;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined2 local_a0;
  undefined uStack_9e;
  undefined uStack_9d;
  undefined4 uStack_9c;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined2 local_80;
  undefined uStack_7e;
  undefined uStack_7d;
  undefined2 uStack_7c;
  undefined uStack_7a;
  undefined uStack_79;
  undefined auStack_78 [32];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 00aa8ad8 to 00aa8adf has its CatchHandler @ 00aa8e24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_98);
  SVar2 = this[0x18];
  if (!param_5) {
    param_6 = 1;
  }
  bVar7 = (param_3 & 0xff) == 0;
  uStack_7e = (undefined)param_3;
  uStack_7d = (undefined)param_4;
  uStack_7c = (undefined2)param_6;
  uStack_79 = (undefined)param_2;
  if (SVar2 == (ShaderStructLayout)0x0) {
    if (bVar7) goto LAB_00aa8b2c;
    uVar8 = (param_3 & 0xff) << 2;
  }
  else if (bVar7) {
LAB_00aa8b2c:
    uVar8 = param_4 & 0xff;
    if ((param_4 & 0xff) == 0) {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = (param_4 & 0xff) * (param_3 & 0xff);
  }
  pbVar1 = *(basic_string **)(this + 0x20);
  pbVar10 = *(basic_string **)(this + 0x28);
  if (pbVar10 == pbVar1) {
    uVar9 = 0;
  }
  else {
    bVar3 = *(byte *)((long)pbVar10 + -6);
    if (SVar2 == (ShaderStructLayout)0x0) {
      if (bVar3 == 0) goto LAB_00aa8b78;
      uVar9 = (uint)bVar3 << 2;
    }
    else if (bVar3 == 0) {
LAB_00aa8b78:
      uVar9 = (uint)*(byte *)((long)pbVar10 + -5);
      if (uVar9 == 0) {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = (uint)*(byte *)((long)pbVar10 + -5) * (uint)bVar3;
    }
    uVar9 = (uint)*(ushort *)(pbVar10 + -2) + uVar9 * *(ushort *)(pbVar10 + -1);
  }
  iVar4 = uVar8 * (param_6 & 0xffff);
  uStack_7a = param_5;
  if (SVar2 != (ShaderStructLayout)0x1) {
    if (SVar2 == (ShaderStructLayout)0x0) {
      if (param_5) {
        if (pbVar10 == pbVar1) {
          uVar9 = 0;
          goto LAB_00aa8c3c;
        }
      }
      else if (((uVar9 & 3) + iVar4 < 5) || (uVar9 = 0, pbVar10 == pbVar1)) goto LAB_00aa8c3c;
      if (*(byte *)((long)pbVar10 + -6) == 0) {
        uVar8 = (uint)*(byte *)((long)pbVar10 + -5);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = (uint)*(byte *)((long)pbVar10 + -6) << 2;
      }
      uVar9 = (uint)*(ushort *)(pbVar10 + -2) + uVar8 * *(ushort *)(pbVar10 + -1) + 3 & 0x7fffffc;
    }
    goto LAB_00aa8c3c;
  }
  if ((this[0x19] != (ShaderStructLayout)0x1) ||
     (((!param_5 && ((uVar9 & 3) + iVar4 < 5)) || (pbVar10 == pbVar1)))) goto LAB_00aa8c3c;
  if (*(byte *)((long)pbVar10 + -6) == 0) {
    uVar8 = (uint)*(byte *)((long)pbVar10 + -5);
    if (uVar8 == 0) {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = (uint)*(byte *)((long)pbVar10 + -5) * (uint)*(byte *)((long)pbVar10 + -6);
  }
  uVar8 = (uint)*(ushort *)(pbVar10 + -2) + uVar8 * *(ushort *)(pbVar10 + -1) + 3 & 0xfffffffc;
  uVar5 = uVar8 - uVar9;
  if (uVar8 < uVar9 || uVar5 == 0) goto LAB_00aa8c3c;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
                    /* try { // try from 00aa8cec to 00aa8cff has its CatchHandler @ 00aa8ddc */
  FUN_00aa8e40(auStack_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_b8);
  pbVar1 = *(basic_string **)(this + 0x28);
  uVar8 = 0;
  if ((uVar5 & 0xff) != 1) {
    uVar8 = uVar5;
  }
  uStack_9e = 0;
  uStack_9c = 0x2000001;
  local_a0 = (undefined2)uVar9;
  uStack_9d = (undefined)uVar8;
  if (pbVar1 == *(basic_string **)(this + 0x30)) {
                    /* try { // try from 00aa8d54 to 00aa8d5b has its CatchHandler @ 00aa8ddc */
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::__push_back_slow_path<ShaderStructLayout::Field_const&>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(this + 0x20),(Field *)&local_b8);
    pbVar10 = *(basic_string **)(this + 0x28);
  }
  else {
                    /* try { // try from 00aa8d30 to 00aa8d3b has its CatchHandler @ 00aa8dd0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    pbVar10 = pbVar1 + 8;
    *(ulong *)(pbVar1 + 6) = CONCAT44(uStack_9c,CONCAT13(uStack_9d,CONCAT12(uStack_9e,local_a0)));
    *(basic_string **)(this + 0x28) = pbVar10;
  }
  if (pbVar10 == *(basic_string **)(this + 0x20)) {
    uVar9 = 0;
  }
  else {
    bVar3 = *(byte *)((long)pbVar10 + -6);
    if (this[0x18] == (ShaderStructLayout)0x0) {
      if (bVar3 == 0) goto LAB_00aa8da0;
      uVar8 = (uint)bVar3 << 2;
    }
    else if (bVar3 == 0) {
LAB_00aa8da0:
      uVar8 = (uint)*(byte *)((long)pbVar10 + -5);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = (uint)*(byte *)((long)pbVar10 + -5) * (uint)bVar3;
    }
    uVar9 = (uint)*(ushort *)(pbVar10 + -2) + uVar8 * *(ushort *)(pbVar10 + -1);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
    pbVar10 = *(basic_string **)(this + 0x28);
  }
LAB_00aa8c3c:
  local_80 = (undefined2)uVar9;
  if (pbVar10 == *(basic_string **)(this + 0x30)) {
                    /* try { // try from 00aa8c70 to 00aa8c77 has its CatchHandler @ 00aa8e0c */
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::__push_back_slow_path<ShaderStructLayout::Field_const&>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(this + 0x20),(Field *)&local_98);
  }
  else {
                    /* try { // try from 00aa8c4c to 00aa8c57 has its CatchHandler @ 00aa8e10 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar10);
    *(ulong *)(pbVar10 + 6) =
         CONCAT17(uStack_79,
                  CONCAT16(uStack_7a,
                           CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,local_80)))));
    *(basic_string **)(this + 0x28) = pbVar10 + 8;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


