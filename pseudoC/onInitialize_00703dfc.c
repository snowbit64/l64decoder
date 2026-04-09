// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 00703dfc
// Size: 228 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalIndoorCondition::onInitialize() */

void AnimalIndoorCondition::onInitialize(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = **(undefined4 **)(in_x0 + 0x28);
  lVar4 = *(long *)(*(long *)(in_x0 + 0x30) + 0x538);
  uStack_4c = (*(undefined4 **)(in_x0 + 0x28))[2];
  if (*(long *)(*(long *)(in_x0 + 0x30) + 0x540) != lVar4) {
    uVar5 = 0;
    do {
      lVar4 = lVar4 + uVar5 * 0x28;
      uVar2 = MathUtil::pointInQuad2D
                        ((Vector2 *)&local_50,(Vector2 *)(lVar4 + 8),(Vector2 *)(lVar4 + 0x10),
                         (Vector2 *)(lVar4 + 0x18),(Vector2 *)(lVar4 + 0x20));
      if ((uVar2 & 1) != 0) {
        if (*(char *)(in_x0 + 0x38) != '\0') goto LAB_00703eb0;
        goto LAB_00703ea0;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      lVar4 = *(long *)(*(long *)(in_x0 + 0x30) + 0x538);
      uVar2 = (*(long *)(*(long *)(in_x0 + 0x30) + 0x540) - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar5 <= uVar2 && uVar2 - uVar5 != 0);
  }
  if (*(char *)(in_x0 + 0x38) == '\0') {
LAB_00703eb0:
    uVar3 = 1;
  }
  else {
LAB_00703ea0:
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


