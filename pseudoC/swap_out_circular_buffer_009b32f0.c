// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __swap_out_circular_buffer
// Entry Point: 009b32f0
// Size: 224 bytes
// Signature: undefined __thiscall __swap_out_circular_buffer(vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>> * this, __split_buffer * param_1)


/* std::__ndk1::vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>&>&) */

void __thiscall
std::__ndk1::
vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
::__swap_out_circular_buffer
          (vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
           *this,__split_buffer *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar5;
  
  puVar3 = *(undefined8 **)this;
  puVar4 = *(undefined8 **)(this + 8);
  lVar2 = *(long *)(param_1 + 8);
  if (puVar4 != puVar3) {
    do {
      puVar5 = puVar4 + -0x14;
      *(undefined8 *)(lVar2 + -0xa0) = *puVar5;
      btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
                ((btAlignedObjectArray<btCollisionObject*> *)(lVar2 + -0x98),
                 (btAlignedObjectArray *)(puVar4 + -0x13));
                    /* try { // try from 009b333c to 009b333f has its CatchHandler @ 009b33d0 */
      btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
                ((btAlignedObjectArray<btCollisionObject*> *)(lVar2 + -0x78),
                 (btAlignedObjectArray *)(puVar4 + -0xf));
      uVar1 = puVar4[-9];
      uVar7 = puVar4[-10];
      uVar6 = puVar4[-0xb];
      *(undefined8 *)(lVar2 + -0x40) = puVar4[-8];
      *(undefined8 *)(lVar2 + -0x48) = uVar1;
      *(undefined8 *)(lVar2 + -0x50) = uVar7;
      *(undefined8 *)(lVar2 + -0x58) = uVar6;
      uVar6 = puVar4[-2];
      uVar1 = puVar4[-3];
      uVar8 = puVar4[-4];
      uVar7 = puVar4[-5];
      uVar10 = puVar4[-6];
      uVar9 = puVar4[-7];
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar4 + -1);
      *(undefined8 *)(lVar2 + -0x10) = uVar6;
      *(undefined8 *)(lVar2 + -0x18) = uVar1;
      *(undefined8 *)(lVar2 + -0x20) = uVar8;
      *(undefined8 *)(lVar2 + -0x28) = uVar7;
      *(undefined8 *)(lVar2 + -0x30) = uVar10;
      *(undefined8 *)(lVar2 + -0x38) = uVar9;
      lVar2 = *(long *)(param_1 + 8) + -0xa0;
      *(long *)(param_1 + 8) = lVar2;
      puVar4 = puVar5;
    } while (puVar5 != puVar3);
    puVar3 = *(undefined8 **)this;
  }
  *(long *)this = lVar2;
  *(undefined8 **)(param_1 + 8) = puVar3;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


