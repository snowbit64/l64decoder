// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyVertRow
// Entry Point: 0098cfd0
// Size: 176 bytes
// Signature: undefined __thiscall copyVertRow(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5)


/* PlayerCenteredCollisionHeightmap::copyVertRow(unsigned int, unsigned int, int, unsigned int,
   unsigned int) */

void __thiscall
PlayerCenteredCollisionHeightmap::copyVertRow
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2,int param_3,uint param_4
          ,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar4 = (ulong)(*(int *)(this + 8) * param_4);
  uVar3 = (ulong)(*(int *)(this + 8) * param_5);
  lVar2 = *(long *)(this + 0x28);
  if ((param_3 < 1) && (param_4 == param_5)) {
    if ((int)param_1 <= (int)param_2) {
      lVar5 = (long)(int)param_2;
      lVar6 = lVar5 + 1;
      puVar7 = (undefined8 *)(lVar2 + (lVar5 + param_3 + uVar3) * 0xc);
      puVar8 = (undefined8 *)(lVar2 + (lVar5 + uVar4) * 0xc);
      do {
        lVar6 = lVar6 + -1;
        uVar9 = *puVar7;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar8 = uVar9;
        puVar7 = (undefined8 *)((long)puVar7 + -0xc);
        puVar8 = (undefined8 *)((long)puVar8 + -0xc);
      } while ((int)param_1 < lVar6);
    }
  }
  else if (param_1 <= param_2) {
    do {
      uVar1 = param_3 + param_1;
      puVar8 = (undefined8 *)(lVar2 + uVar4 * 0xc + (ulong)param_1 * 0xc);
      param_1 = param_1 + 1;
      puVar7 = (undefined8 *)(lVar2 + uVar3 * 0xc + (ulong)uVar1 * 0xc);
      uVar9 = *puVar7;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar8 = uVar9;
    } while (param_1 <= param_2);
  }
  return;
}


