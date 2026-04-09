// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerTargetProvider
// Entry Point: 00880808
// Size: 328 bytes
// Signature: undefined __thiscall registerTargetProvider(AnimalSteering * this, uint param_1, SteeringTargetProvider * param_2)


/* AnimalSteering::registerTargetProvider(unsigned int, SteeringTargetProvider*) */

void __thiscall
AnimalSteering::registerTargetProvider
          (AnimalSteering *this,uint param_1,SteeringTargetProvider *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  SteeringTargetProvider *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  SteeringTargetProvider **ppSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(this + 200);
  puVar2 = (undefined8 *)*puVar8;
  puVar7 = puVar8;
  puVar5 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar8;
    puVar5 = puVar8;
  }
  else {
    do {
      if (*(uint *)(puVar5 + 4) >= param_1) {
        puVar7 = puVar5;
      }
      puVar1 = puVar5 + (*(uint *)(puVar5 + 4) < param_1);
      puVar5 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    if ((puVar7 != puVar8) && (*(uint *)(puVar7 + 4) <= param_1)) {
      pSVar3 = (SteeringTargetProvider *)puVar7[5];
      puVar7[5] = param_2;
      ppSVar6 = (SteeringTargetProvider **)(this + 0xd8);
      if (pSVar3 != *ppSVar6) {
        return;
      }
      goto LAB_00880938;
    }
    puVar5 = (undefined8 *)(this + 200);
LAB_00880880:
    do {
      puVar8 = puVar2;
      if (*(uint *)(puVar8 + 4) <= param_1) {
        if (*(uint *)(puVar8 + 4) < param_1) {
          puVar5 = puVar8 + 1;
          puVar2 = (undefined8 *)*puVar5;
          if ((undefined8 *)*puVar5 != (undefined8 *)0x0) goto LAB_00880880;
        }
        puVar7 = (undefined8 *)*puVar5;
        goto joined_r0x008808a4;
      }
      puVar2 = (undefined8 *)*puVar8;
      puVar5 = puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    puVar7 = (undefined8 *)*puVar8;
  }
joined_r0x008808a4:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x30);
    puVar7[5] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = puVar8;
    *puVar5 = puVar7;
    plVar4 = *(long **)(this + 0xc0);
    *(uint *)(puVar7 + 4) = param_1;
    puVar8 = puVar7;
    if (*plVar4 != 0) {
      *(long *)(this + 0xc0) = *plVar4;
      puVar8 = (undefined8 *)*puVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 200),(__tree_node_base *)puVar8);
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 1;
  }
  ppSVar6 = (SteeringTargetProvider **)(puVar7 + 5);
LAB_00880938:
  *ppSVar6 = param_2;
  return;
}


