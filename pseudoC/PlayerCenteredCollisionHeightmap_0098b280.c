// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlayerCenteredCollisionHeightmap
// Entry Point: 0098b280
// Size: 276 bytes
// Signature: undefined __thiscall PlayerCenteredCollisionHeightmap(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2, float param_3, uint param_4, uint param_5)


/* PlayerCenteredCollisionHeightmap::PlayerCenteredCollisionHeightmap(unsigned int, unsigned int,
   float, unsigned int, unsigned int) */

void __thiscall
PlayerCenteredCollisionHeightmap::PlayerCenteredCollisionHeightmap
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2,float param_3,
          uint param_4,uint param_5)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  uVar1 = (param_2 + 1) * (param_1 + 1);
  uVar7 = (ulong)uVar1;
  *(float *)(this + 0x10) = param_3;
  *(uint *)(this + 8) = param_1 + 1;
  *(uint *)(this + 0xc) = param_2 + 1;
  *(uint *)(this + 0x14) = param_4;
  *(uint *)(this + 0x18) = param_5;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  pvVar2 = operator_new__(uVar7 * 0xc);
  *(void **)(this + 0x28) = pvVar2;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 & 0xfffffffe;
      puVar5 = (undefined *)((long)pvVar2 + 0x14);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 2;
        puVar5[-0xc] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x18;
      } while (uVar6 != 0);
      if (uVar3 == uVar7) goto LAB_0098b324;
    }
    lVar4 = uVar7 - uVar3;
    puVar5 = (undefined *)((long)pvVar2 + uVar3 * 0xc + 8);
    do {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 0xc;
    } while (lVar4 != 0);
  }
LAB_0098b324:
  uVar1 = param_2 * param_1;
  uVar7 = (ulong)uVar1;
  pvVar2 = operator_new__(uVar7 << 3);
  *(void **)(this + 0x30) = pvVar2;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar7 & 0xfffffffe;
      puVar5 = (undefined *)((long)pvVar2 + 0xc);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 2;
        puVar5[-8] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x10;
      } while (uVar6 != 0);
      if (uVar3 == uVar7) {
        return;
      }
    }
    lVar4 = uVar7 - uVar3;
    puVar5 = (undefined *)((long)pvVar2 + uVar3 * 8 + 4);
    do {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 8;
    } while (lVar4 != 0);
  }
  return;
}


