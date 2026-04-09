// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawRect
// Entry Point: 00a6df14
// Size: 320 bytes
// Signature: undefined __thiscall drawRect(FullScreenRenderController * this, ICommandBuffer * param_1, float param_2, float param_3, float param_4, float param_5)


/* FullScreenRenderController::drawRect(ICommandBuffer*, float, float, float, float) */

void __thiscall
FullScreenRenderController::drawRect
          (FullScreenRenderController *this,ICommandBuffer *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar6 = NEON_fmadd(param_2,0x40000000,0xbf800000);
  uVar7 = NEON_fmadd(param_3,0x40000000,0xbf800000);
  uVar8 = NEON_fmadd(param_4,0x40000000,0xbf800000);
  uVar5 = NEON_fmadd(param_5,0x40000000,0xbf800000);
  pplVar4 = (long **)(this + 8);
  puVar2 = (undefined8 *)(**(code **)(**pplVar4 + 0x10))(*pplVar4,param_1,0,0x60,1);
  puVar2[1] = CONCAT44(param_3,param_2);
  *puVar2 = CONCAT44(uVar7,uVar6);
  puVar2[3] = CONCAT44(param_3,param_4);
  puVar2[2] = CONCAT44(uVar7,uVar8);
  puVar2[9] = CONCAT44(param_3,param_4);
  puVar2[8] = CONCAT44(uVar7,uVar8);
  puVar2[0xb] = CONCAT44(param_5,param_4);
  puVar2[10] = CONCAT44(uVar5,uVar8);
  puVar2[5] = CONCAT44(param_5,param_2);
  puVar2[4] = CONCAT44(uVar5,uVar6);
  puVar2[7] = CONCAT44(param_5,param_2);
  puVar2[6] = CONCAT44(uVar5,uVar6);
  (**(code **)(**pplVar4 + 0x18))(*pplVar4,param_1);
  (**(code **)(*(long *)param_1 + 0x50))(param_1,pplVar4,1,*(undefined8 *)(this + 0x18));
  (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
  (**(code **)(*(long *)param_1 + 0xe8))(param_1,6,0,0,0,0);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


