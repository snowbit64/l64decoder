// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bddf8
// Entry Point: 007bddf8
// Size: 112 bytes
// Signature: undefined FUN_007bddf8(void)


void FUN_007bddf8(TerrainDeformation *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)puVar2);
  iVar1 = *(int *)(param_2 + 0x28);
  puVar2[3] = 0;
  if (iVar1 == 8) {
    puVar2[3] = *(undefined8 *)(param_2 + 0x20);
  }
  TerrainDeformation::beginApply(param_1,*(bool *)param_2,FUN_007bde68,puVar2);
  return;
}


