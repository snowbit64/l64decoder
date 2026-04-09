// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportThreat
// Entry Point: 006fe0d4
// Size: 424 bytes
// Signature: undefined __thiscall reportThreat(AnimalHusbandry * this, float * param_1, float param_2, uint param_3)


/* AnimalHusbandry::reportThreat(float*, float, unsigned int) */

void __thiscall
AnimalHusbandry::reportThreat(AnimalHusbandry *this,float *param_1,float param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  BoundingSphere aBStack_78 [32];
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0x1fc90] == (AnimalHusbandry)0x0) goto LAB_006fe250;
  local_58 = *(undefined8 *)param_1;
  local_50 = param_1[2];
  BoundingSphere::BoundingSphere(aBStack_78,(Vector3 *)&local_58,param_2);
                    /* try { // try from 006fe140 to 006fe147 has its CatchHandler @ 006fe27c */
  uVar4 = BoundingAxisAlignedBox::intersects
                    ((BoundingAxisAlignedBox *)(this + 0x1f770),(BoundingVolume *)aBStack_78);
  if ((uVar4 & 1) != 0) {
    puVar5 = (uint *)(this + 0x1fbd8);
    uVar1 = *puVar5;
    if (uVar1 < 4) {
      uVar2 = *puVar5;
      *(uint *)(this + (ulong)uVar1 * 0x14 + 0x1fbdc) = param_3;
      uVar7 = *(undefined8 *)param_1;
      *(float *)(this + (ulong)uVar1 * 0x14 + 0x1fbe8) = param_1[2];
      *(float *)(this + (ulong)uVar1 * 0x14 + 0x1fbec) = param_2;
      *(undefined8 *)(this + (ulong)uVar1 * 0x14 + 0x1fbe0) = uVar7;
      *puVar5 = uVar2 + 1;
    }
    else {
      puVar5 = (uint *)(this + 0x1fbdc);
      if (*puVar5 < param_3) {
        lVar6 = 0;
      }
      else {
        puVar5 = (uint *)(this + 0x1fbf0);
        if (*puVar5 < param_3) {
          lVar6 = 1;
        }
        else {
          puVar5 = (uint *)(this + 0x1fc04);
          if (*puVar5 < param_3) {
            lVar6 = 2;
          }
          else {
            puVar5 = (uint *)(this + 0x1fc18);
            if (param_3 <= *puVar5) goto LAB_006fe248;
            lVar6 = 3;
          }
        }
      }
      *puVar5 = param_3;
      uVar7 = *(undefined8 *)param_1;
      *(float *)(this + lVar6 * 0x14 + 0x1fbe8) = param_1[2];
      *(undefined8 *)(this + lVar6 * 0x14 + 0x1fbe0) = uVar7;
      *(float *)(this + lVar6 * 0x14 + 0x1fbec) = param_2;
    }
  }
LAB_006fe248:
  BoundingSphere::~BoundingSphere(aBStack_78);
LAB_006fe250:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


