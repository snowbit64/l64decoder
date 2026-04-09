// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAabbTreeFromChildren
// Entry Point: 00f60834
// Size: 420 bytes
// Signature: undefined createAabbTreeFromChildren(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCompoundShape::createAabbTreeFromChildren() */

void btCompoundShape::createAabbTreeFromChildren(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x0;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x60) == 0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x60,0x10);
    puVar7[6] = 0;
    puVar7[10] = 0;
    *(undefined *)(puVar7 + 7) = 1;
    *(undefined *)(puVar7 + 0xb) = 1;
    *(undefined8 *)((long)puVar7 + 0x24) = 0;
    *(undefined8 *)((long)puVar7 + 0x44) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0xffffffff;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined8 **)(in_x0 + 0x60) = puVar7;
    if (0 < *(int *)(in_x0 + 0x24)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar12 = *(long *)(in_x0 + 0x30);
        lVar1 = lVar12 + lVar10;
        plVar8 = *(long **)(lVar1 + 0x40);
        (**(code **)(*plVar8 + 0x10))(plVar8,lVar1,&local_78,&local_88);
        uVar6 = uStack_70;
        uVar5 = local_78;
        uVar4 = uStack_80;
        uVar3 = local_88;
        puVar9 = *(undefined8 **)(in_x0 + 0x60);
        puVar7 = (undefined8 *)puVar9[1];
        if (puVar7 == (undefined8 *)0x0) {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          puVar7 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
          puVar7[6] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
        }
        else {
          puVar9[1] = 0;
        }
        puVar7[4] = 0;
        puVar7[5] = lVar11;
        puVar7[6] = 0;
        puVar7[1] = uVar6;
        *puVar7 = uVar5;
        puVar7[3] = uVar4;
        puVar7[2] = uVar3;
        FUN_00f42680(puVar9,*puVar9,puVar7);
        lVar12 = lVar12 + lVar10;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x58;
        *(int *)((long)puVar9 + 0x14) = *(int *)((long)puVar9 + 0x14) + 1;
        *(undefined8 **)(lVar12 + 0x50) = puVar7;
      } while (lVar11 < *(int *)(in_x0 + 0x24));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


