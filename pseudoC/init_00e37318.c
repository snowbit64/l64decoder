// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00e37318
// Size: 320 bytes
// Signature: undefined __cdecl init(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* SoLoud::Soloud::init(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

ulong SoLoud::Soloud::init
                (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  Soloud *pSVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  pSVar2 = (Soloud *)(ulong)param_1;
  if ((0x10 < param_3) || (6 < param_6)) {
    return 1;
  }
  if (*(code **)(pSVar2 + 0x18) != (code *)0x0) {
    (**(code **)(pSVar2 + 0x18))(pSVar2);
  }
  *(undefined8 *)(pSVar2 + 0x18) = 0;
  if (*(void **)(pSVar2 + 8) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(pSVar2 + 8));
  }
  *(undefined8 *)(pSVar2 + 8) = 0;
  if (*(void **)(pSVar2 + 0x20) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(pSVar2 + 0x20));
  }
  uVar3 = Thread::createMutex();
  *(undefined8 *)(pSVar2 + 8) = uVar3;
  uVar3 = Thread::createMutex();
  uVar5 = param_6 - 1;
  uVar6 = 0xac44;
  if (param_4 != 0) {
    uVar6 = param_4;
  }
  *(undefined8 *)(pSVar2 + 0x20) = uVar3;
  if (param_6 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)(pSVar2 + 0x20ac) = 0;
  *(undefined8 *)(pSVar2 + 0x20b0) = 0;
  if (uVar5 < 6) {
    uVar5 = *(uint *)(&DAT_0055f9c4 + (long)(int)uVar5 * 4);
  }
  else {
    uVar5 = 2;
  }
  if ((param_3 == 10) || (param_3 == 0)) {
    uVar1 = 0x1000;
    if (param_5 != 0) {
      uVar1 = param_5;
    }
    uVar4 = opensles_init(pSVar2,param_2,uVar6,uVar1,uVar5);
    if ((int)uVar4 == 0) {
      *(undefined4 *)(pSVar2 + 0x20ac) = 10;
      return uVar4;
    }
    if (param_3 != 0) {
      return uVar4;
    }
  }
  uVar6 = 6;
  if (param_3 == 0) {
    uVar6 = 7;
  }
  return (ulong)uVar6;
}


