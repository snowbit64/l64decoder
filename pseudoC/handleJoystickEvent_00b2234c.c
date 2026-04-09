// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleJoystickEvent
// Entry Point: 00b2234c
// Size: 808 bytes
// Signature: undefined __thiscall handleJoystickEvent(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handleJoystickEvent(AInputEvent*) */

void __thiscall
AndroidInputDevice::handleJoystickEvent(AndroidInputDevice *this,AInputEvent *param_1)

{
  AndroidInputDevice *pAVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_78 [10];
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = AInputEvent_getType(param_1);
  if (iVar3 != 2) {
    uVar4 = 0;
    goto LAB_00b22648;
  }
  fVar10 = (float)AMotionEvent_getAxisValue(param_1,0xf,0);
  fVar11 = (float)AMotionEvent_getAxisValue(param_1,0x10,0);
  pAVar1 = this + 0x13c4;
  if (((*pAVar1 != (AndroidInputDevice)0x0) || (fVar10 != 0.0)) || (fVar11 != 0.0)) {
    puVar6 = (undefined4 *)(this + 0x1440);
    *pAVar1 = (AndroidInputDevice)0x0;
    *(undefined8 *)(this + 0x1440) = 0;
    *(undefined8 *)(this + 0x1438) = 0;
    if (fVar10 == 1.0) {
      lVar8 = 0x143c;
LAB_00b2240c:
      *(undefined4 *)(this + lVar8) = 0x3f800000;
      *pAVar1 = (AndroidInputDevice)0x1;
    }
    else if (fVar10 == -1.0) {
      lVar8 = 0x1444;
      goto LAB_00b2240c;
    }
    if (fVar11 != 1.0) {
      if (fVar11 != -1.0) goto LAB_00b22450;
      puVar6 = (undefined4 *)(this + 0x1438);
    }
    *puVar6 = 0x3f800000;
    *pAVar1 = (AndroidInputDevice)0x1;
  }
LAB_00b22450:
  local_78[0] = (float)AMotionEvent_getAxisValue(param_1,0,0);
  local_78[1] = (float)AMotionEvent_getAxisValue(param_1,1,0);
  fVar10 = (float)AMotionEvent_getAxisValue(param_1,0xb,0);
  local_78[2] = (float)AMotionEvent_getAxisValue(param_1,0xc,0);
  local_78[2] = fVar10 + local_78[2];
  fVar10 = (float)AMotionEvent_getAxisValue(param_1,0xe,0);
  local_78[3] = (float)AMotionEvent_getAxisValue(param_1,0xd,0);
  local_78[3] = fVar10 + local_78[3];
  fVar11 = (float)AMotionEvent_getAxisValue(param_1,0x12,0);
  fVar10 = (float)AMotionEvent_getAxisValue(param_1,0x16,0);
  if (fVar10 <= fVar11) {
    fVar10 = fVar11;
  }
  fVar12 = (float)AMotionEvent_getAxisValue(param_1,0x11,0);
  fVar11 = (float)AMotionEvent_getAxisValue(param_1,0x17,0);
  lVar8 = 0;
  pfVar7 = local_78;
  if (fVar11 <= fVar12) {
    fVar11 = fVar12;
  }
  pfVar9 = (float *)(this + 0x1450);
  local_50 = NEON_fmadd(fVar10,0xc0000000,0x3f800000);
  uStack_4c = NEON_fmadd(fVar11,0xc0000000,0x3f800000);
  do {
    uVar5 = (uint)lVar8;
    if ((uVar5 < 0xc) && ((1 << (ulong)(uVar5 & 0x1f) & 0xc0fU) != 0)) {
      fVar11 = *pfVar7;
      fVar10 = -1.0;
      if ((-1.0 <= fVar11) && (fVar10 = 1.0, fVar11 <= 1.0)) {
        fVar10 = fVar11;
      }
      fVar11 = pfVar9[0xc];
      if ((uVar5 & 0x7ffffffe) == 10) {
        fVar13 = (float)NEON_fmadd(fVar11,0xc0000000,0x3f800000);
        fVar12 = 1.0;
        if ((fVar10 <= fVar13) && (fVar12 = 1.0, fVar11 <= 0.9999)) {
          fVar12 = (fVar10 + 1.0) / (1.0 - fVar11) + -1.0;
        }
      }
      else if (((fVar10 < -fVar11) || (fVar12 = 0.0, fVar11 < fVar10)) &&
              (fVar12 = 0.0, fVar11 <= 0.9999)) {
        fVar12 = -fVar11;
        if (fVar10 <= 0.0) {
          fVar12 = fVar11;
        }
        fVar12 = (fVar10 + fVar12) / (1.0 - fVar11);
      }
      fVar10 = *pfVar9;
      *pfVar7 = fVar12;
      if (fVar10 != fVar12) {
        *pfVar9 = fVar12;
      }
    }
    lVar8 = lVar8 + 1;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  } while (lVar8 != 0xc);
  uVar4 = 1;
LAB_00b22648:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


