// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079757c
// Entry Point: 0079757c
// Size: 220 bytes
// Signature: undefined FUN_0079757c(void)


void FUN_0079757c(uint *param_1)

{
  GiantsNotificationManager *this;
  
  *(undefined **)(param_1 + 0x40) = &DAT_0050a39f;
  param_1[0x42] = 6;
  *(undefined **)(param_1 + 0x44) = &DAT_0050a39f;
  *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) & 0xfffe;
  param_1[0x46] = 6;
  *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
  *(undefined **)(param_1 + 0x48) = &DAT_0050a39f;
  param_1[0x4a] = 6;
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  *(undefined **)(param_1 + 0x4c) = &DAT_0050a39f;
  param_1[0x4e] = 6;
  *(undefined **)(param_1 + 0x50) = &DAT_0050a39f;
  param_1[0x52] = 6;
  *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xfffe;
  this = (GiantsNotificationManager *)GiantsNotificationManager::getInstance();
  GiantsNotificationManager::getNotification
            (this,*param_1,(char **)(param_1 + 0x40),(char **)(param_1 + 0x44),
             (char **)(param_1 + 0x48),(char **)(param_1 + 0x4c),(char **)(param_1 + 0x50));
  return;
}


