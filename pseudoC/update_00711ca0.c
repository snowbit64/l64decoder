// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00711ca0
// Size: 472 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalPickRandomTargetAction::update() */

void AnimalPickRandomTargetAction::update(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar7 = 0;
  lVar4 = *(long *)(in_x0 + 0x30);
  *(undefined8 *)(lVar4 + 0x24) = 0x3f800000;
  *(undefined4 *)(lVar4 + 0x2c) = 0;
  *(undefined *)(lVar4 + 0x34) = 0;
  do {
    uVar2 = DetourNavigationMeshQuery::getRandomPosition
                      (*(DetourNavigationMeshQuery **)(*(long *)(in_x0 + 0x28) + 0x50),&local_58);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(in_x0 + 0x28);
      lVar5 = *(long *)(in_x0 + 0x30);
      uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 4),fStack_54 * *(float *)(lVar4 + 0x14));
      fVar10 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0x24),uVar9);
      *(float *)(lVar5 + 0x18) = fVar10 + *(float *)(lVar4 + 0x34);
      uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 8),fStack_54 * *(float *)(lVar4 + 0x18));
      fVar10 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0x28),uVar9);
      *(float *)(lVar5 + 0x1c) = *(float *)(lVar4 + 0x38) + fVar10;
      uVar9 = NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xc),fStack_54 * *(float *)(lVar4 + 0x1c))
      ;
      fVar10 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar4 + 0x2c),uVar9);
      *(float *)(lVar5 + 0x20) = *(float *)(lVar4 + 0x3c) + fVar10;
      iVar6 = *(int *)(in_x0 + 0x38);
      if ((iVar6 != -1) && (lVar5 = *(long *)(lVar4 + 0x538), *(long *)(lVar4 + 0x540) != lVar5)) {
        uVar2 = 0;
        uVar8 = 1;
        while( true ) {
          if (*(int *)(lVar5 + uVar2 * 0x28 + 4) == iVar6) {
            lVar5 = lVar5 + uVar2 * 0x28;
            local_60 = local_58;
            uStack_5c = local_50;
            uVar2 = MathUtil::pointInQuad2D
                              ((Vector2 *)&local_60,(Vector2 *)(lVar5 + 8),(Vector2 *)(lVar5 + 0x10)
                               ,(Vector2 *)(lVar5 + 0x18),(Vector2 *)(lVar5 + 0x20));
            if ((uVar2 & 1) != 0) goto LAB_00711d18;
            lVar4 = *(long *)(in_x0 + 0x28);
          }
          lVar5 = *(long *)(lVar4 + 0x538);
          uVar2 = (*(long *)(lVar4 + 0x540) - lVar5 >> 3) * -0x3333333333333333;
          if (uVar2 < uVar8 || uVar2 - uVar8 == 0) break;
          iVar6 = *(int *)(in_x0 + 0x38);
          uVar2 = uVar8;
          uVar8 = (ulong)((int)uVar8 + 1);
        }
      }
      lVar5 = *(long *)(in_x0 + 0x30);
      uVar2 = (**(code **)(**(long **)(lVar4 + 0x58) + 0x10))
                        (*(undefined4 *)(lVar5 + 0x4c),*(long **)(lVar4 + 0x58),lVar5 + 0x18,
                         *(undefined4 *)(lVar5 + 0x198));
      if ((uVar2 & 1) == 0) {
        uVar3 = 1;
        goto LAB_00711e4c;
      }
    }
LAB_00711d18:
    iVar7 = iVar7 + 1;
    if (iVar7 == 10) {
      uVar3 = 2;
LAB_00711e4c:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
  } while( true );
}


