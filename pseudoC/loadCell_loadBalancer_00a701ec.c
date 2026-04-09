// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCell_loadBalancer
// Entry Point: 00a701ec
// Size: 48 bytes
// Signature: undefined __thiscall loadCell_loadBalancer(LocalGeometryTransformGroup * this, short param_1, short param_2, IRenderDevice * param_3)


/* LocalGeometryTransformGroup::loadCell_loadBalancer(short, short, IRenderDevice*) */

void __thiscall
LocalGeometryTransformGroup::loadCell_loadBalancer
          (LocalGeometryTransformGroup *this,short param_1,short param_2,IRenderDevice *param_3)

{
  loadCell(this,*(GridCellData **)
                 (*(long *)(this + 0x180) +
                 (long)(((int)param_1 - *(int *)(this + 0x194)) +
                       *(int *)(this + 400) * ((int)param_2 - *(int *)(this + 0x198))) * 8),param_3)
  ;
  return;
}


