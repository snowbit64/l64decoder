// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveVRML2
// Entry Point: 00d53ef0
// Size: 120 bytes
// Signature: undefined __thiscall SaveVRML2(TMMesh * this, basic_ofstream * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HACD::TMMesh::SaveVRML2(std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >&) */

undefined8 __thiscall HACD::TMMesh::SaveVRML2(TMMesh *this,basic_ofstream *param_1)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  auVar2 = NEON_fmov(0x3fe0000000000000,8);
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_88 = auVar2._8_8_;
  local_90 = auVar2._0_8_;
  uStack_78 = 0x3fd999999999999a;
  local_80 = 0x3fe0000000000000;
  local_60 = 0x3fe0000000000000;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_38 = SUB168(_DAT_004c5490,8);
  local_40 = SUB168(_DAT_004c5490,0);
  uStack_70 = local_90;
  uStack_68 = uStack_88;
  SaveVRML2(this,param_1,(Material *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


