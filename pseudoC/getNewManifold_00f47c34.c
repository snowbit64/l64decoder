// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewManifold
// Entry Point: 00f47c34
// Size: 612 bytes
// Signature: undefined __thiscall getNewManifold(btCollisionDispatcher * this, btCollisionObject * param_1, btCollisionObject * param_2)


/* btCollisionDispatcher::getNewManifold(btCollisionObject const*, btCollisionObject const*) */

undefined8 * __thiscall
btCollisionDispatcher::getNewManifold
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_48;
  float local_44;
  
  gNumManifold = gNumManifold + 1;
  pfVar6 = (float *)&gContactBreakingThreshold;
  if ((*(uint *)(this + 8) >> 1 & 1) != 0) {
    fVar8 = (float)(**(code **)(**(long **)(param_1 + 200) + 0x28))(gContactBreakingThreshold);
    local_44 = fVar8;
    local_48 = (float)(**(code **)(**(long **)(param_2 + 200) + 0x28))(gContactBreakingThreshold);
    pfVar6 = &local_44;
    if (local_48 <= fVar8) {
      pfVar6 = &local_48;
    }
  }
  lVar3 = *(long *)(this + 0x78);
  fVar8 = *pfVar6;
  uVar9 = *(undefined4 *)(param_1 + 0xbc);
  uVar10 = *(undefined4 *)(param_2 + 0xbc);
  if (*(int *)(lVar3 + 8) == 0) {
    if (((byte)this[8] >> 2 & 1) != 0) {
      return (undefined8 *)0x0;
    }
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x330,0x10);
  }
  else {
    puVar7 = *(undefined8 **)(lVar3 + 0x10);
    uVar5 = *puVar7;
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
  }
  uVar9 = NEON_fminnm(uVar9,uVar10);
  puVar7[0xf] = 0;
  *(undefined *)(puVar7 + 0x10) = 0;
  *(undefined4 *)puVar7 = 0x401;
  puVar7[0x27] = 0;
  *(undefined8 *)((long)puVar7 + 0x8c) = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  *(undefined8 *)((long)puVar7 + 0x14c) = 0;
  *(undefined8 *)((long)puVar7 + 0x144) = 0;
  *(undefined8 *)((long)puVar7 + 0x15c) = 0;
  *(undefined8 *)((long)puVar7 + 0x154) = 0;
  *(undefined8 *)((long)puVar7 + 0x9c) = 0;
  *(undefined8 *)((long)puVar7 + 0x94) = 0;
  *(undefined *)(puVar7 + 0x28) = 0;
  *(undefined8 *)((long)puVar7 + 0x20c) = 0;
  *(undefined8 *)((long)puVar7 + 0x204) = 0;
  *(undefined8 *)((long)puVar7 + 0x21c) = 0;
  *(undefined8 *)((long)puVar7 + 0x214) = 0;
  puVar7[0x3f] = 0;
  *(undefined *)(puVar7 + 0x40) = 0;
  *(undefined8 *)((long)puVar7 + 0x2cc) = 0;
  *(undefined8 *)((long)puVar7 + 0x2c4) = 0;
  *(undefined8 *)((long)puVar7 + 0x2dc) = 0;
  *(undefined8 *)((long)puVar7 + 0x2d4) = 0;
  uVar2 = *(uint *)(this + 0x14);
  puVar7[0x57] = 0;
  uVar1 = *(uint *)(this + 0x18);
  *(undefined *)(puVar7 + 0x58) = 0;
  puVar7[0x61] = param_1;
  puVar7[0x62] = param_2;
  *(undefined4 *)(puVar7 + 99) = 0;
  *(float *)((long)puVar7 + 0x31c) = fVar8;
  *(undefined4 *)(puVar7 + 100) = uVar9;
  *(uint *)((long)puVar7 + 0x32c) = uVar2;
  if (uVar2 == uVar1) {
    uVar1 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar2 = *(uint *)(this + 0x14);
      }
      if (0 < (int)uVar2) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(this + 0x20) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar2 * 8 - lVar4 != 0);
      }
      if ((*(long *)(this + 0x20) != 0) && (this[0x28] != (btCollisionDispatcher)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar2 = *(uint *)(this + 0x14);
      }
      *(long *)(this + 0x20) = lVar3;
      *(uint *)(this + 0x18) = uVar1;
      this[0x28] = (btCollisionDispatcher)0x1;
    }
  }
  *(undefined8 **)(*(long *)(this + 0x20) + (long)(int)uVar2 * 8) = puVar7;
  *(uint *)(this + 0x14) = uVar2 + 1;
  return puVar7;
}


