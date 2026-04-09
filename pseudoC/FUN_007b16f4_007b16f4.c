// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b16f4
// Entry Point: 007b16f4
// Size: 116 bytes
// Signature: undefined FUN_007b16f4(void)


void FUN_007b16f4(undefined4 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x440);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *puVar2 = &PTR__FieldCropsUpdaterConstructor_00fdb508;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x20;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = 0;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x24) = 0;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x1c) = 0;
    *(undefined *)((long)puVar2 + lVar3 + 0x2c) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x400);
  uVar4 = *param_1;
  puVar2[0x86] = 0;
  *(undefined4 *)(puVar2 + 0x87) = uVar4;
  puVar2[0x85] = 0;
  puVar2[0x84] = 0;
  return;
}


