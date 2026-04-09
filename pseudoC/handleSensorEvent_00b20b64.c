// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleSensorEvent
// Entry Point: 00b20b64
// Size: 620 bytes
// Signature: undefined __thiscall handleSensorEvent(AndroidInputDevice * this, int param_1)


/* WARNING: Removing unreachable block (ram,0x00b20dc8) */
/* AndroidInputDevice::handleSensorEvent(int) */

void __thiscall AndroidInputDevice::handleSensorEvent(AndroidInputDevice *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_b0;
  float local_a8;
  undefined auStack_a0 [16];
  long local_90;
  undefined8 local_88;
  float local_80;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == 5) {
    if (*(long *)(this + 0x14f8) == 0) goto LAB_00b20d64;
    lVar4 = ASensorEventQueue_getEvents(*(long *)(this + 0x14f8),auStack_a0,1);
    bVar2 = 0 < lVar4;
    if (0 < lVar4) {
      do {
        lVar5 = ASensorEventQueue_getEvents(*(undefined8 *)(this + 0x14f8),auStack_a0,1);
      } while (0 < lVar5);
      if (0 < lVar4) {
        if (*(long *)(this + 0x1560) < 1) {
          fVar6 = *(float *)(this + 0x1568);
        }
        else {
          fVar6 = (float)(local_90 - *(long *)(this + 0x1560)) / 1e+09;
          *(float *)(this + 0x1568) = fVar6;
        }
        *(long *)(this + 0x1560) = local_90;
        *(ulong *)(this + 0x1554) =
             CONCAT44((float)((ulong)local_88 >> 0x20) * fVar6,(float)local_88 * fVar6);
        *(float *)(this + 0x155c) = fVar6 * local_80;
      }
    }
    bVar1 = false;
LAB_00b20d70:
    if (!bVar2) goto LAB_00b20d84;
  }
  else {
    if (param_1 != 4) {
      if (((param_1 == 3) && (*(long *)(this + 0x14d8) != 0)) &&
         (lVar4 = ASensorEventQueue_getEvents(*(long *)(this + 0x14d8),auStack_a0,1), 0 < lVar4)) {
        do {
          lVar5 = ASensorEventQueue_getEvents(*(undefined8 *)(this + 0x14d8),auStack_a0,1);
        } while (0 < lVar5);
        if (0 < lVar4) {
          lVar4 = (long)*(int *)(this + 0x15a0) * 4;
          local_b0 = local_88;
          local_a8 = local_80;
          fVar6 = *(float *)((long)&local_b0 + (long)(char)(&DAT_004c48f3)[lVar4] * 4) *
                  (float)(int)(char)(&DAT_004c48f1)[lVar4];
          fVar7 = *(float *)((long)&local_b0 + (long)(char)(&DAT_004c48f2)[lVar4] * 4) *
                  (float)(int)(char)(&DAT_004c48f0)[lVar4];
          uVar8 = NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
          fVar10 = (float)NEON_fmadd(local_80,local_80,uVar8);
          fVar9 = 1.0;
          if (1e-06 < fVar10) {
            fVar9 = 1.0 / SQRT(fVar10);
          }
          *(float *)(this + 0x20) = fVar7 * fVar9;
          *(float *)(this + 0x24) = fVar6 * fVar9;
          *(float *)(this + 0x28) = local_80 * fVar9;
        }
      }
LAB_00b20d64:
      bVar1 = false;
      bVar2 = false;
      goto LAB_00b20d70;
    }
    if (*(long *)(this + 0x14e8) == 0) goto LAB_00b20d64;
    lVar4 = ASensorEventQueue_getEvents(*(long *)(this + 0x14e8),auStack_a0,1);
    bVar1 = 0 < lVar4;
    if (0 < lVar4) {
      do {
        lVar5 = ASensorEventQueue_getEvents(*(undefined8 *)(this + 0x14e8),auStack_a0,1);
      } while (0 < lVar5);
      if (0 < lVar4) {
        *(undefined8 *)(this + 0x1548) = local_88;
        *(float *)(this + 0x1550) = local_80;
      }
    }
    bVar2 = false;
    if (lVar4 < 1) goto LAB_00b20d70;
  }
  calculateGravityVector(this,bVar1,bVar2);
LAB_00b20d84:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


