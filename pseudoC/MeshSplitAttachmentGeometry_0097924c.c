// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MeshSplitAttachmentGeometry
// Entry Point: 0097924c
// Size: 732 bytes
// Signature: undefined __thiscall MeshSplitAttachmentGeometry(MeshSplitAttachmentGeometry * this, char * param_1, vector * param_2, MeshSplitAttachmentSharedData * param_3)


/* MeshSplitAttachmentGeometry::MeshSplitAttachmentGeometry(char const*,
   std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> > const&,
   MeshSplitAttachmentSharedData*) */

void __thiscall
MeshSplitAttachmentGeometry::MeshSplitAttachmentGeometry
          (MeshSplitAttachmentGeometry *this,char *param_1,vector *param_2,
          MeshSplitAttachmentSharedData *param_3)

{
  int iVar1;
  BoundingSphere *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *this_01;
  long lVar5;
  float fVar6;
  
  Geometry::Geometry((Geometry *)this,param_1,false);
                    /* try { // try from 0097927c to 00979283 has its CatchHandler @ 00979544 */
  Streamable::Streamable((Streamable *)(this + 0x58));
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x76) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this_01 = (long *)(this + 0x90);
  *(undefined8 *)(this + 0x98) = 0;
  *this_01 = 0;
  *(MeshSplitAttachmentSharedData **)(this + 0x68) = param_3;
  *(undefined ***)this = &PTR__MeshSplitAttachmentGeometry_00fe0720;
  *(undefined ***)(this + 0x58) = &PTR__MeshSplitAttachmentGeometry_00fe0798;
  *(undefined ***)(this + 0x10) = &PTR__MeshSplitAttachmentGeometry_00fe0778;
  *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) & 0xffffffe3ffffffff | 0x200;
  iVar1 = *(int *)(param_3 + 0x54);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_3 + 0x40);
  *(int *)(param_3 + 0x54) = iVar1 + 1;
  if (this_01 != (long *)param_2) {
                    /* try { // try from 009792fc to 00979303 has its CatchHandler @ 00979528 */
    std::__ndk1::
    vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
    ::assign<MeshSplitAttachmentGeometry::ShapeAttachment*>
              ((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                *)this_01,*(ShapeAttachment **)param_2,*(ShapeAttachment **)(param_2 + 8));
  }
                    /* try { // try from 00979304 to 0097930b has its CatchHandler @ 00979540 */
  this_00 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00979310 to 00979313 has its CatchHandler @ 00979530 */
  BoundingSphere::BoundingSphere(this_00);
  lVar2 = *(long *)(this + 0x90);
  uVar3 = *(long *)(this + 0x98) - lVar2;
  if ((int)(uVar3 >> 2) != 0) {
                    /* try { // try from 00979354 to 0097935b has its CatchHandler @ 0097955c */
    for (lVar5 = 0; lVar2 = *(long *)(param_3 + 0x10) + (ulong)*(ushort *)(lVar2 + lVar5 + 2) * 0x50
        , BoundingSphere::merge(this_00,(Vector3 *)(lVar2 + 0x40),*(float *)(lVar2 + 0x4c)),
        (uVar3 >> 2 & 0xffffffff) * 4 + -4 != lVar5; lVar5 = lVar5 + 4) {
      lVar2 = *this_01;
    }
  }
                    /* try { // try from 00979370 to 0097937b has its CatchHandler @ 0097952c */
  Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
  lVar2 = *(long *)(this + 0x90);
  if (lVar2 == *(long *)(this + 0x98)) {
    return;
  }
  uVar3 = 0;
  *(undefined4 *)(this + 0x80) = 0;
  do {
                    /* try { // try from 009793a0 to 009793a3 has its CatchHandler @ 00979558 */
    lVar5 = IndexedTriangleSet::getSubset
                      (*(IndexedTriangleSet **)(*(long *)(this + 0x68) + 0x28),
                       (uint)*(ushort *)(lVar2 + uVar3 * 4 + 2));
    lVar2 = *(long *)(this + 0x90);
    uVar3 = (ulong)((int)uVar3 + 1);
    fVar6 = *(float *)(lVar5 + 0x10) + *(float *)(this + 0x80);
    uVar4 = *(long *)(this + 0x98) - lVar2 >> 2;
    *(float *)(this + 0x80) = fVar6;
  } while (uVar3 < uVar4);
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x80) = fVar6 / (float)(unkuint9)uVar4;
  if (*(long *)(this + 0x98) == lVar2) {
    *(undefined8 *)(this + 0x84) = 0x7fc00000;
  }
  else {
    uVar3 = 0;
    do {
                    /* try { // try from 009793f8 to 009793fb has its CatchHandler @ 00979554 */
      lVar5 = IndexedTriangleSet::getSubset
                        (*(IndexedTriangleSet **)(*(long *)(this + 0x68) + 0x28),
                         (uint)*(ushort *)(lVar2 + uVar3 * 4 + 2));
      lVar2 = *(long *)(this + 0x90);
      uVar3 = (ulong)((int)uVar3 + 1);
      fVar6 = *(float *)(lVar5 + 0x14) + *(float *)(this + 0x84);
      uVar4 = *(long *)(this + 0x98) - lVar2 >> 2;
      *(float *)(this + 0x84) = fVar6;
    } while (uVar3 < uVar4);
    *(undefined4 *)(this + 0x88) = 0;
    *(float *)(this + 0x84) = fVar6 / (float)(unkuint9)uVar4;
    if (*(long *)(this + 0x98) != lVar2) {
      uVar3 = 0;
      do {
                    /* try { // try from 00979450 to 00979453 has its CatchHandler @ 00979550 */
        lVar5 = IndexedTriangleSet::getSubset
                          (*(IndexedTriangleSet **)(*(long *)(this + 0x68) + 0x28),
                           (uint)*(ushort *)(lVar2 + uVar3 * 4 + 2));
        lVar2 = *(long *)(this + 0x90);
        uVar3 = (ulong)((int)uVar3 + 1);
        fVar6 = *(float *)(lVar5 + 0x18) + *(float *)(this + 0x88);
        uVar4 = *(long *)(this + 0x98) - lVar2 >> 2;
        *(float *)(this + 0x88) = fVar6;
      } while (uVar3 < uVar4);
      *(undefined4 *)(this + 0x8c) = 0;
      *(float *)(this + 0x88) = fVar6 / (float)(unkuint9)uVar4;
      if (*(long *)(this + 0x98) == lVar2) {
        fVar6 = NAN;
      }
      else {
        uVar3 = 0;
        do {
                    /* try { // try from 009794ac to 009794af has its CatchHandler @ 0097954c */
          lVar5 = IndexedTriangleSet::getSubset
                            (*(IndexedTriangleSet **)(*(long *)(this + 0x68) + 0x28),
                             (uint)*(ushort *)(lVar2 + uVar3 * 4 + 2));
          lVar2 = *(long *)(this + 0x90);
          uVar3 = (ulong)((int)uVar3 + 1);
          fVar6 = *(float *)(lVar5 + 0x1c) + *(float *)(this + 0x8c);
          uVar4 = *(long *)(this + 0x98) - lVar2 >> 2;
          *(float *)(this + 0x8c) = fVar6;
        } while (uVar3 < uVar4);
        fVar6 = fVar6 / (float)(unkuint9)uVar4;
      }
      goto LAB_00979500;
    }
  }
  fVar6 = NAN;
  *(undefined8 *)(this + 0x88) = 0x7fc00000;
LAB_00979500:
  *(float *)(this + 0x8c) = fVar6;
  return;
}


