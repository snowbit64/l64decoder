// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handlePointerEvent
// Entry Point: 00b2267c
// Size: 580 bytes
// Signature: undefined __thiscall handlePointerEvent(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handlePointerEvent(AInputEvent*) */

undefined8 __thiscall
AndroidInputDevice::handlePointerEvent(AndroidInputDevice *this,AInputEvent *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 local_88 [2];
  uint local_84;
  double local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = AMotionEvent_getAction(param_1);
  if ((uVar3 & 0xff) < 7) {
    uVar3 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar3 & 99) == 0) {
      if (((uVar3 & 0xc) != 0) && (lVar4 = AMotionEvent_getPointerCount(param_1), lVar4 != 0)) {
        uVar3 = 1;
        do {
          lVar6 = (long)(int)(uVar3 - 1);
          local_88[0] = (undefined2)(uVar3 - 1);
          local_78 = AMotionEvent_getPointerId(param_1,lVar6);
          local_84 = AMotionEvent_getAction(param_1);
          local_84 = local_84 & 0xff;
          lVar4 = AMotionEvent_getEventTime(param_1);
          local_80 = (((double)lVar4 / 1000.0) / 1000.0) / 1000.0;
          fVar7 = (float)AMotionEvent_getX(param_1,lVar6);
          fVar8 = (float)AMotionEvent_getY(param_1,lVar6);
          fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x3c));
          fVar10 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
          fVar8 = 1.0 - fVar8 / fVar9;
          uVar12 = NEON_fmin(fVar7 / fVar10,0x3f800000);
          uVar11 = NEON_fmin(fVar8,0x3f800000);
          local_74 = 0;
          if (0.0 <= fVar7 / fVar10) {
            local_74 = uVar12;
          }
          uStack_70 = 0;
          if (0.0 <= fVar8) {
            uStack_70 = uVar11;
          }
          handleTouchEvent(this,(TouchInputEvent *)local_88);
          uVar5 = AMotionEvent_getPointerCount(param_1);
          uVar1 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
        } while (uVar1 < uVar5);
      }
    }
    else {
      uVar3 = AMotionEvent_getAction(param_1);
      uVar3 = uVar3 >> 8 & 0xff;
      local_88[0] = (undefined2)uVar3;
      local_78 = AMotionEvent_getPointerId(param_1,uVar3);
      local_84 = AMotionEvent_getAction(param_1);
      local_84 = local_84 & 0xff;
      lVar4 = AMotionEvent_getEventTime(param_1);
      local_80 = (((double)lVar4 / 1000.0) / 1000.0) / 1000.0;
      fVar7 = (float)AMotionEvent_getX(param_1,uVar3);
      fVar8 = (float)AMotionEvent_getY(param_1,uVar3);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x3c));
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
      fVar8 = 1.0 - fVar8 / fVar9;
      uVar12 = NEON_fmin(fVar7 / fVar10,0x3f800000);
      uVar11 = NEON_fmin(fVar8,0x3f800000);
      local_74 = 0;
      if (0.0 <= fVar7 / fVar10) {
        local_74 = uVar12;
      }
      uStack_70 = 0;
      if (0.0 <= fVar8) {
        uStack_70 = uVar11;
      }
      handleTouchEvent(this,(TouchInputEvent *)local_88);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


