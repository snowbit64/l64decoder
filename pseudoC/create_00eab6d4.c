// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 00eab6d4
// Size: 200 bytes
// Signature: undefined __cdecl create(uint param_1, IUserTaskRunner * param_2)


/* simplejobsystem::SimpleJobSystem::create(unsigned int, VHACD::IVHACD::IUserTaskRunner*) */

undefined8 * simplejobsystem::SimpleJobSystem::create(uint param_1,IUserTaskRunner *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  puVar1 = (undefined8 *)operator_new(0xd8);
  *(uint *)((long)puVar1 + 0x6c) = param_1;
  puVar1[0x18] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_addJob_010143b0;
  puVar1[1] = &PTR_getSimpleJob_01014400;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x1a] = param_2;
  puVar2 = (ulong *)operator_new__(uVar4 << 7 | 8);
  puVar3 = puVar2 + 1;
  *puVar2 = uVar4;
  if (param_1 != 0) {
    puVar2 = puVar3;
    do {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != puVar3 + uVar4 * 0x10);
  }
  puVar1[0x19] = puVar3;
  return puVar1;
}


