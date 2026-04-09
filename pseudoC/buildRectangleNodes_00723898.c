// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildRectangleNodes
// Entry Point: 00723898
// Size: 132 bytes
// Signature: undefined __thiscall buildRectangleNodes(RectangleTree * this, uint param_1, uint * param_2, BoundingBox * param_3)


/* RectangleTree::buildRectangleNodes(unsigned int, unsigned int*, BoundingBox*) */

void __thiscall
RectangleTree::buildRectangleNodes
          (RectangleTree *this,uint param_1,uint *param_2,BoundingBox *param_3)

{
  void *pvVar1;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (param_1 != 0) {
    pvVar1 = operator_new__((ulong)(param_1 * 2 - 1) * 0x14);
    *(void **)this = pvVar1;
    buildRectangleNodesRecursive(this,param_1,param_2,param_3,0);
    return;
  }
  *(undefined8 *)this = 0;
  return;
}


