// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IKChain
// Entry Point: 0076a238
// Size: 304 bytes
// Signature: undefined __thiscall IKChain(IKChain * this, uint param_1)


/* IKChain::IKChain(unsigned int) */

void __thiscall IKChain::IKChain(IKChain *this,uint param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar7 = (ulong)param_1;
  *(uint *)(this + 0x10) = param_1;
  pvVar2 = operator_new__((ulong)param_1 * 0xe4);
  if (param_1 != 0) {
    lVar8 = 0;
    do {
                    /* try { // try from 0076a280 to 0076a283 has its CatchHandler @ 0076a368 */
      CCDIKSolverUtil::Joint::Joint((Joint *)((long)pvVar2 + lVar8));
      lVar8 = lVar8 + 0xe4;
    } while (uVar7 * 0xe4 - lVar8 != 0);
  }
  *(void **)this = pvVar2;
  pvVar3 = operator_new__(uVar7 << 3);
  *(void **)(this + 8) = pvVar3;
  if (param_1 != 0) {
    uVar9 = NEON_fmov(0x3f800000,4);
    lVar4 = 0;
    lVar8 = 0;
    while( true ) {
      puVar1 = (undefined8 *)((long)pvVar2 + lVar8);
      *(undefined8 *)((long)puVar1 + 0x2c) = 0;
      *(undefined8 *)((long)puVar1 + 0x24) = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      *(undefined8 *)((long)puVar1 + 0x54) = 0;
      *(undefined8 *)((long)puVar1 + 0x4c) = 0;
      *(undefined8 *)((long)puVar1 + 0x6c) = 0;
      *(undefined8 *)((long)puVar1 + 100) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      *(undefined8 *)((long)puVar1 + 0x94) = 0;
      *(undefined8 *)((long)puVar1 + 0x8c) = 0;
      *puVar1 = 0x80000000;
      puVar1[3] = 0;
      lVar5 = *(long *)this;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
      lVar6 = *(long *)(this + 8);
      *(undefined4 *)((long)puVar1 + 0x34) = 0x3f800000;
      *(undefined4 *)(puVar1 + 9) = 0x3f800000;
      *(undefined8 *)((long)puVar1 + 0x5c) = uVar9;
      *(undefined4 *)((long)puVar1 + 0x74) = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
      *(undefined4 *)((long)puVar1 + 0x9c) = 0x3f800000;
      puVar1[2] = 0;
      puVar1[1] = 0x3f800000;
      *(undefined4 *)(lVar5 + lVar8 + 0xe0) = 0;
      *(undefined8 *)(lVar6 + lVar4) = 0;
      if (uVar7 * 0xe4 + -0xe4 == lVar8) break;
      pvVar2 = *(void **)this;
      lVar8 = lVar8 + 0xe4;
      lVar4 = lVar4 + 8;
    }
  }
  *(uint *)(this + 0x14) = param_1;
  return;
}


