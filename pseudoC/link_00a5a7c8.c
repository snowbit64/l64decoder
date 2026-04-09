// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: link
// Entry Point: 00a5a7c8
// Size: 524 bytes
// Signature: undefined __thiscall link(RawTransformGroup * this, Node * param_1, uint param_2)


/* RawTransformGroup::link(Node*, unsigned int) */

undefined4 __thiscall RawTransformGroup::link(RawTransformGroup *this,Node *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar2 = ScenegraphNode::link((ScenegraphNode *)this,param_1,param_2);
  if (((byte)param_1[0x10] >> 4 & 1) != 0) {
    if ((((((uVar4 | *(ulong *)(this + 0x20)) != 0) ||
          (updateWorldTransformation(), 0.0001 <= ABS(*(float *)(this + 0xb8) + -1.0))) ||
         (0.0001 <= ABS(*(float *)(this + 0xbc)))) ||
        (((0.0001 <= ABS(*(float *)(this + 0xc0)) || (0.0001 <= ABS(*(float *)(this + 200)))) ||
         ((0.0001 <= ABS(*(float *)(this + 0xcc) + -1.0) ||
          ((0.0001 <= ABS(*(float *)(this + 0xd0)) || (0.0001 <= ABS(*(float *)(this + 0xd8)))))))))
        ) || ((0.0001 <= ABS(*(float *)(this + 0xdc)) ||
              ((((0.0001 <= ABS(*(float *)(this + 0xe0) + -1.0) ||
                 (0.0001 <= ABS(*(float *)(this + 0xe8)))) ||
                (0.0001 <= ABS(*(float *)(this + 0xec)))) ||
               (0.0001 <= ABS(*(float *)(this + 0xf0)))))))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = (uVar1 ^ *(uint *)(this + 0x40)) & uVar1 << 1 & 2 | uVar3;
    if (((*(uint *)(this + 0x40) | uVar1) & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar3 | 0x58,0);
    return uVar2;
  }
  return uVar2;
}


