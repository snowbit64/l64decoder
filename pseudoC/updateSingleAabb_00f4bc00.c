// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSingleAabb
// Entry Point: 00f4bc00
// Size: 692 bytes
// Signature: undefined __thiscall updateSingleAabb(btCollisionWorld * this, btCollisionObject * param_1)


/* btCollisionWorld::updateSingleAabb(btCollisionObject*) */

void __thiscall
btCollisionWorld::updateSingleAabb(btCollisionWorld *this,btCollisionObject *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  float fVar4;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),param_1 + 8,&local_48,&local_58);
  fVar4 = gContactBreakingThreshold;
  local_48 = local_48 - gContactBreakingThreshold;
  local_44 = local_44 - gContactBreakingThreshold;
  local_40 = local_40 - gContactBreakingThreshold;
  local_58 = local_58 + gContactBreakingThreshold;
  local_54 = local_54 + gContactBreakingThreshold;
  local_50 = local_50 + gContactBreakingThreshold;
  if (((this[0x40] != (btCollisionWorld)0x0) && (*(int *)(param_1 + 0x100) == 2)) &&
     (((byte)param_1[0xe0] & 3) == 0)) {
    (**(code **)(**(long **)(param_1 + 200) + 0x10))
              (*(long **)(param_1 + 200),param_1 + 0x48,&local_68,&local_78);
    local_68 = local_68 - fVar4;
    fStack_64 = fStack_64 - fVar4;
    local_60 = local_60 - fVar4;
    local_78 = local_78 + fVar4;
    fStack_74 = fStack_74 + fVar4;
    local_70 = local_70 + fVar4;
    if (local_68 < local_48) {
      local_48 = local_68;
    }
    if (fStack_64 < local_44) {
      local_44 = fStack_64;
    }
    if (local_60 < local_40) {
      local_40 = local_60;
    }
    if (local_5c < local_3c) {
      local_3c = local_5c;
    }
    if (local_58 < local_78) {
      local_58 = local_78;
    }
    if (local_54 < fStack_74) {
      local_54 = fStack_74;
    }
    if (local_50 < local_70) {
      local_50 = local_70;
    }
    if (local_4c < local_6c) {
      local_4c = local_6c;
    }
  }
  if (((byte)param_1[0xe0] & 1) == 0) {
    uVar3 = NEON_fmadd(local_54 - local_44,local_54 - local_44,
                       (local_58 - local_48) * (local_58 - local_48));
    fVar4 = (float)NEON_fmadd(local_50 - local_40,local_50 - local_40,uVar3);
    if (1e+12 <= fVar4) {
      if ((*(uint *)(param_1 + 0xec) & 0xfffffffe) != 4) {
        *(undefined4 *)(param_1 + 0xec) = 5;
      }
      if (((DAT_0212566c & 1) == 0) && (plVar2 = *(long **)(this + 0x68), plVar2 != (long *)0x0)) {
        DAT_0212566c = 1;
        (**(code **)(*plVar2 + 0x58))(plVar2,"Overflow in AABB, object removed from simulation");
        (**(code **)(**(long **)(this + 0x68) + 0x58))
                  (*(long **)(this + 0x68),
                   "If you can reproduce this, please email bugs@continuousphysics.com\n");
        (**(code **)(**(long **)(this + 0x68) + 0x58))
                  (*(long **)(this + 0x68),
                   "Please include above information, your Platform, version of OS.\n");
        (**(code **)(**(long **)(this + 0x68) + 0x58))(*(long **)(this + 0x68),"Thanks.\n");
      }
      goto LAB_00f4bdf4;
    }
  }
  (**(code **)(**(long **)(this + 0x60) + 0x20))
            (*(long **)(this + 0x60),*(undefined8 *)(param_1 + 0xc0),&local_48,&local_58,
             *(undefined8 *)(this + 0x28));
LAB_00f4bdf4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


