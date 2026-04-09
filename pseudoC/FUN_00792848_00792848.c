// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792848
// Entry Point: 00792848
// Size: 564 bytes
// Signature: undefined FUN_00792848(void)


void FUN_00792848(uint *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  I3DStreamingManager *this;
  long lVar4;
  char *__dest;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_60;
  ulong local_58;
  undefined8 uStack_50;
  char *local_48;
  float local_40;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
                    /* try { // try from 00792874 to 00792953 has its CatchHandler @ 00792a7c */
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::getI3DLoadTaskProgress
            (this,*param_1,(LOAD_PROGRESS *)&local_3c,&local_40,(basic_string *)&local_58,
             (IStreamingCallback **)&local_60);
  uVar6 = *(undefined8 *)(I3DLoad::toString(I3DLoad::LOAD_PROGRESS)::strs + (ulong)local_3c * 8);
  param_1[0x42] = 6;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  pcVar5 = (char *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    pcVar5 = local_48;
  }
  param_1[0x44] = (uint)local_40;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  param_1[0x46] = 4;
  lVar4 = __strlen_chk(pcVar5,0xffffffffffffffff);
  __dest = (char *)operator_new__(lVar4 + 1);
  pcVar5 = strcpy(__dest,pcVar5);
  *(char **)(param_1 + 0x48) = pcVar5;
  param_1[0x4a] = 6;
  *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) | 1;
  if (local_60 == (long *)0x0) {
    param_1[0x4e] = 6;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x4c) = &DAT_0050a39f;
    param_1[0x52] = 8;
    *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xfffe;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
    lVar4 = 0;
  }
  else {
    pcVar5 = (char *)(**(code **)(*local_60 + 0x18))(local_60);
    iVar3 = strcmp(pcVar5,"ScriptingStreamingCallback");
    if (iVar3 == 0) {
      bVar1 = *(byte *)(local_60 + 1);
      lVar7 = local_60[3];
      param_1[0x4e] = 6;
      lVar4 = (long)local_60 + 9;
      if ((bVar1 & 1) != 0) {
        lVar4 = lVar7;
      }
      *(long *)(param_1 + 0x4c) = lVar4;
      *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
      lVar4 = local_60[4];
      *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xfffe;
      param_1[0x52] = 8;
      *(long *)(param_1 + 0x50) = lVar4;
      lVar4 = local_60[5];
    }
    else {
      uVar6 = (**(code **)(*local_60 + 0x18))();
      lVar4 = 0;
      *(undefined8 *)(param_1 + 0x4c) = uVar6;
      *(undefined8 *)(param_1 + 0x50) = 0;
      param_1[0x4e] = 6;
      *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xfffe;
      param_1[0x52] = 8;
      *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
    }
  }
  *(long *)(param_1 + 0x54) = lVar4;
  param_1[0x56] = 8;
  *(ushort *)(param_1 + 0x57) = *(ushort *)(param_1 + 0x57) & 0xfffe;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


