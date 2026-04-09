// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ce60
// Entry Point: 0079ce60
// Size: 144 bytes
// Signature: undefined FUN_0079ce60(void)


void FUN_0079ce60(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)operator_new(0x48);
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 4);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  *(uint *)(puVar2 + 8) = uVar1;
  if (lVar3 != 0) {
                    /* try { // try from 0079ceb0 to 0079cec7 has its CatchHandler @ 0079cef0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar2);
  }
  if (lVar4 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar2 + 4));
  }
  puVar2[3] = uVar5;
  GenericSaveGameUtil::readSaveGameStart(uVar1,ScriptingSavegameUploadReport::StaticCallback,puVar2)
  ;
  return;
}


