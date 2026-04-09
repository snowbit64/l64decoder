// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createComputeProgramObject
// Entry Point: 00ab7854
// Size: 348 bytes
// Signature: undefined __thiscall createComputeProgramObject(VulkanRenderDevice * this, VulkanShaderObject * param_1)


/* VulkanRenderDevice::createComputeProgramObject(VulkanShaderObject*) */

VulkanProgramObject * __thiscall
VulkanRenderDevice::createComputeProgramObject(VulkanRenderDevice *this,VulkanShaderObject *param_1)

{
  long **pplVar1;
  VulkanProgramObject *this_00;
  long **pplVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  uint uVar7;
  long *plVar8;
  
  pplVar3 = (long **)(this + 0x548);
  pplVar2 = *(long ***)(this + 0x548);
  plVar8 = *(long **)(param_1 + 0x10);
  pplVar5 = pplVar3;
  pplVar6 = pplVar2;
  if (pplVar2 == (long **)0x0) {
    uVar7 = (uint)*(undefined8 *)(this + 0x550);
    plVar4 = *pplVar3;
  }
  else {
    do {
      if (pplVar6[4] >= plVar8) {
        pplVar5 = pplVar6;
      }
      pplVar1 = pplVar6 + (pplVar6[4] < plVar8);
      pplVar6 = (long **)*pplVar1;
    } while ((long **)*pplVar1 != (long **)0x0);
    if ((pplVar5 != pplVar3) && (pplVar5[4] <= plVar8)) {
      uVar7 = *(uint *)(pplVar5 + 5);
      goto LAB_00ab797c;
    }
    uVar7 = (uint)*(undefined8 *)(this + 0x550);
    pplVar5 = (long **)(this + 0x548);
LAB_00ab78c4:
    do {
      pplVar3 = pplVar2;
      if (pplVar3[4] <= plVar8) {
        if (pplVar3[4] < plVar8) {
          pplVar5 = pplVar3 + 1;
          pplVar2 = (long **)*pplVar5;
          if (*pplVar5 != (long *)0x0) goto LAB_00ab78c4;
        }
        plVar4 = *pplVar5;
        goto joined_r0x00ab792c;
      }
      pplVar2 = (long **)*pplVar3;
      pplVar5 = pplVar3;
    } while ((long **)*pplVar3 != (long **)0x0);
    plVar4 = *pplVar3;
  }
joined_r0x00ab792c:
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)operator_new(0x30);
    plVar4[4] = (long)plVar8;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = (long)pplVar3;
    *pplVar5 = plVar4;
    plVar8 = *(long **)(this + 0x540);
    *(uint *)(plVar4 + 5) = uVar7;
    if (*plVar8 != 0) {
      *(long *)(this + 0x540) = *plVar8;
      plVar4 = *pplVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x548),(__tree_node_base *)plVar4);
    *(long *)(this + 0x550) = *(long *)(this + 0x550) + 1;
  }
LAB_00ab797c:
  this_00 = (VulkanProgramObject *)operator_new(0x200);
                    /* try { // try from 00ab7988 to 00ab7997 has its CatchHandler @ 00ab79b0 */
  VulkanProgramObject::VulkanProgramObject(this_00,this,param_1,uVar7);
  return this_00;
}


