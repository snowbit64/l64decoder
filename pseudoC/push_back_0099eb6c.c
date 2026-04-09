// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0099eb6c
// Size: 180 bytes
// Signature: undefined __thiscall push_back(SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> * this, TransformCommand * param_1)


/* Bt2ScenegraphPhysicsContext::SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand, true,
   32u>::push_back(Bt2ScenegraphPhysicsContext::TransformCommand const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::
push_back(SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *this,
         TransformCommand *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 < *(uint *)(this + 0xc)) {
    __dest = *(void **)this;
  }
  else {
    *(uint *)(this + 0xc) = uVar1 + 0x20;
    __dest = operator_new__((ulong)(uVar1 + 0x20) * 0x50);
    __src = *(void **)this;
    if (*(uint *)(this + 8) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(this + 8) * 0x50);
    }
    operator_delete__(__src);
    uVar1 = *(uint *)(this + 8);
    *(void **)this = __dest;
  }
  uVar3 = *(undefined8 *)param_1;
  puVar2 = (undefined8 *)((long)__dest + (ulong)uVar1 * 0x50);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  puVar2[6] = uVar5;
  puVar2[9] = uVar4;
  puVar2[8] = uVar3;
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[5] = uVar7;
  puVar2[4] = uVar6;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


