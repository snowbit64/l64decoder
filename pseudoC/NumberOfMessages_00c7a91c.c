// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NumberOfMessages
// Entry Point: 00c7a91c
// Size: 228 bytes
// Signature: undefined NumberOfMessages(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::NumberOfMessages() const */

undefined8 CryptoPP::BufferedTransformation::NumberOfMessages(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*in_x0 + 0x168))();
  if (lVar2 == 0) {
    if (((DAT_0211f5e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211f5e8), iVar1 != 0)) {
      DAT_0211f600 = &PTR__BufferedTransformation_00ff03d8;
      DAT_0211f608 = &PTR__BitBucket_00ff0568;
      __cxa_guard_release(&DAT_0211f5e8);
      lVar2 = (**(code **)(*in_x0 + 0x168))();
    }
    else {
      lVar2 = (**(code **)(*in_x0 + 0x168))();
    }
    while (lVar2 != 0) {
      in_x0 = (long *)(**(code **)(*in_x0 + 0x168))(in_x0);
      lVar2 = (**(code **)(*in_x0 + 0x168))();
    }
    return 0;
  }
  plVar3 = (long *)(**(code **)(*in_x0 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00c7a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar3 + 0xd8))();
  return uVar4;
}


