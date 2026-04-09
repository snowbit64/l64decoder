// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2f84
// Entry Point: 007b2f84
// Size: 160 bytes
// Signature: undefined FUN_007b2f84(void)


void FUN_007b2f84(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (DAT_01065bc8 - DAT_01065bc0 == -0x28) {
    DAT_01065bc8 = DAT_01065bc0;
  }
  else {
    std::__ndk1::
    vector<DensityMapHeightUpdater::OcclusionArea,std::__ndk1::allocator<DensityMapHeightUpdater::OcclusionArea>>
    ::__append((vector<DensityMapHeightUpdater::OcclusionArea,std::__ndk1::allocator<DensityMapHeightUpdater::OcclusionArea>>
                *)&DAT_01065bc0,1);
  }
  lVar1 = DAT_01065bc8;
  *(undefined4 *)(DAT_01065bc8 + -0x28) = *param_2;
  *(undefined4 *)(lVar1 + -0x24) = param_2[4];
  *(undefined4 *)(lVar1 + -0x20) = param_2[8];
  *(undefined4 *)(lVar1 + -0x1c) = param_2[0xc];
  *(undefined4 *)(lVar1 + -0x18) = param_2[0x10];
  *(undefined4 *)(lVar1 + -0x14) = param_2[0x14];
  *(undefined4 *)(lVar1 + -0x10) = param_2[0x18];
  *(undefined4 *)(lVar1 + -0xc) = param_2[0x1c];
  *(undefined4 *)(lVar1 + -8) = param_2[0x20];
  *(undefined *)(lVar1 + -4) = *(undefined *)(param_2 + 0x24);
  return;
}


