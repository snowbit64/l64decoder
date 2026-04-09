// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVertexDeclaration
// Entry Point: 00ab7478
// Size: 372 bytes
// Signature: undefined __thiscall createVertexDeclaration(VulkanRenderDevice * this, VertexDeclarationDesc * param_1)


/* VulkanRenderDevice::createVertexDeclaration(VertexDeclarationDesc const&) */

VulkanVertexDeclaration * __thiscall
VulkanRenderDevice::createVertexDeclaration(VulkanRenderDevice *this,VertexDeclarationDesc *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  pair pVar4;
  ulong uVar5;
  VulkanVertexDeclaration *this_00;
  Shared *pSVar6;
  VulkanRenderDevice *pVVar7;
  VulkanRenderDevice *pVVar8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pVVar8 = *(VulkanRenderDevice **)(this + 0x4b8);
  *(undefined4 *)(this + 0x3b0) = 0;
  if (pVVar8 != (VulkanRenderDevice *)0x0) {
    pVVar7 = this + 0x4b8;
    do {
      uVar5 = ComparerUtil::VertexDeclarationDescComparer::operator()
                        ((VertexDeclarationDescComparer *)(this + 0x4c0),
                         (VertexDeclarationDesc *)(pVVar8 + 0x20),param_1);
      lVar1 = 8;
      if ((uVar5 & 1) == 0) {
        lVar1 = 0;
        pVVar7 = pVVar8;
      }
      pVVar8 = *(VulkanRenderDevice **)(pVVar8 + lVar1);
    } while (pVVar8 != (VulkanRenderDevice *)0x0);
    if ((pVVar7 != this + 0x4b8) &&
       (uVar5 = ComparerUtil::VertexDeclarationDescComparer::operator()
                          ((VertexDeclarationDescComparer *)(this + 0x4c0),param_1,
                           (VertexDeclarationDesc *)(pVVar7 + 0x20)), (uVar5 & 1) == 0)) {
      pSVar6 = (Shared *)(pVVar7 + 0x90);
      goto LAB_00ab7598;
    }
  }
  uStack_268 = *(undefined8 *)(param_1 + 0x48);
  local_270 = *(undefined8 *)(param_1 + 0x40);
  uStack_258 = *(undefined8 *)(param_1 + 0x58);
  uStack_260 = *(undefined8 *)(param_1 + 0x50);
  local_dc = 1;
  uStack_248 = *(undefined8 *)(param_1 + 0x68);
  local_250 = *(undefined8 *)(param_1 + 0x60);
  uStack_2a8 = *(undefined8 *)(param_1 + 8);
  local_2b0 = *(undefined8 *)param_1;
  uStack_298 = *(undefined8 *)(param_1 + 0x18);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(uint *)(this + 0x4c0);
  uStack_288 = *(undefined8 *)(param_1 + 0x28);
  local_290 = *(undefined8 *)(param_1 + 0x20);
  uStack_278 = *(undefined8 *)(param_1 + 0x38);
  uStack_280 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  pVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
          ::
          __emplace_unique_key_args<VertexDeclarationDesc,std::__ndk1::pair<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>
                    ((__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
                      *)(this + 0x4b0),(VertexDeclarationDesc *)&local_2b0,(pair *)&local_2b0);
  pSVar6 = (Shared *)((ulong)pVar4 + 0x90);
  VulkanVertexDeclaration::createSharedData(param_1,uVar2,pSVar6);
LAB_00ab7598:
  this_00 = (VulkanVertexDeclaration *)operator_new(0x10);
                    /* try { // try from 00ab75a4 to 00ab75ab has its CatchHandler @ 00ab75ec */
  VulkanVertexDeclaration::VulkanVertexDeclaration(this_00,pSVar6);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


