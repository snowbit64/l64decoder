// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a057f0
// Size: 296 bytes
// Signature: undefined __thiscall init(CullingArgs * this, CullingArgs * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* CullingArgs::init(CullingArgs const*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void __thiscall
CullingArgs::init(CullingArgs *this,CullingArgs *param_1,uint param_2,uint param_3,uint param_4,
                 uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  TransformArgs::init((TransformArgs *)this,false);
  *(uint *)(this + 0x3a8) = param_2;
  *(uint *)(this + 0x3ac) = param_3;
  *(uint *)(this + 0x3b0) = param_4;
  *(uint *)(this + 0x3b4) = param_5;
  *(uint *)(this + 0x3b8) = param_6;
  *(undefined8 *)(this + 0x3c0) = 0;
  std::__ndk1::
  __tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>::
  destroy((__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
           *)(this + 0x3c8),*(__tree_node **)(this + 0x3d0));
  *(CullingArgs **)(this + 0x3c8) = this + 0x3d0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  plVar6 = **(long ***)(this + 0x3a0);
  *(undefined8 *)(this + 0x3f0) = 0;
  lVar7 = (**(code **)(*plVar6 + 0x28))();
  uVar2 = *(uint *)(this + 0x3a8) & 0xffffffbf;
  if (*(char *)(lVar7 + 0x9b) != '\0') {
    uVar2 = *(uint *)(this + 0x3a8);
  }
  uVar1 = uVar2 & 0xffffffdf;
  if ((uVar2 & 2) != 0) {
    uVar1 = uVar2;
  }
  if ((*(char *)(lVar7 + 0x9b) == '\0') || ((uVar2 & 2) == 0 || (uVar1 & 1) == 0)) {
    uVar2 = uVar1 & 0xffffffef;
    if ((uVar1 & 1) != 0) {
      uVar2 = uVar1;
    }
    *(uint *)(this + 0x3a8) = uVar2;
  }
  lVar7 = *(long *)(this + 0x3a0);
  bVar5 = param_1 != (CullingArgs *)0x0;
  puVar4 = (undefined4 *)(lVar7 + 0x6c);
  if (bVar5) {
    puVar4 = (undefined4 *)(param_1 + 0x3e0);
  }
  puVar3 = (undefined4 *)(lVar7 + 0x70);
  if (bVar5) {
    puVar3 = (undefined4 *)(param_1 + 0x3e4);
  }
  *(undefined4 *)(this + 0x3e0) = *puVar4;
  puVar4 = (undefined4 *)(lVar7 + 0x74);
  if (bVar5) {
    puVar4 = (undefined4 *)(param_1 + 1000);
  }
  *(undefined4 *)(this + 0x3e4) = *puVar3;
  *(undefined4 *)(this + 1000) = *puVar4;
  return;
}


