// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: I3DLoad
// Entry Point: 008fd7ec
// Size: 1120 bytes
// Signature: undefined __thiscall I3DLoad(I3DLoad * this, bool * param_1)


/* I3DLoad::I3DLoad(bool volatile&) */

void __thiscall I3DLoad::I3DLoad(I3DLoad *this,bool *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  I3DShapePoolFactory *this_00;
  I3DIndexedMeshSetFactory *this_01;
  I3DSceneGraphFactory *this_02;
  I3DAnimationSetsFactory *this_03;
  I3DDynamicsPoolFactory *this_04;
  I3DUserAttributesFactory *this_05;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  
  Streamable::Streamable((Streamable *)this);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(I3DLoad **)(this + 0xa0) = this + 0xa8;
  *(undefined ***)this = &PTR__I3DLoad_00fdfae8;
  *(undefined8 *)(this + 0xf0) = 0;
  *(I3DLoad **)(this + 0xe8) = this + 0xf0;
  *(I3DLoad **)(this + 0x88) = this + 0x90;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(I3DLoad **)(this + 0xb8) = this + 0xc0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(I3DLoad **)(this + 0x100) = this + 0x108;
  *(I3DLoad **)(this + 0x118) = this + 0x120;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(I3DLoad **)(this + 0x130) = this + 0x138;
  *(undefined8 *)(this + 0x198) = 0;
  *(I3DLoad **)(this + 0x148) = this + 0x150;
  *(undefined8 *)(this + 0x150) = 0;
  *(void **)(this + 0x18) = (void *)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  *(I3DLoad **)(this + 0x160) = this + 0x168;
  *(I3DLoad **)(this + 0x178) = this + 0x180;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(I3DLoad **)(this + 400) = this + 0x198;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(bool **)(this + 0x1c0) = param_1;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
                    /* try { // try from 008fd940 to 008fd947 has its CatchHandler @ 008fdc7c */
  pvVar3 = operator_new(0x2a0);
  memset(pvVar3,0,0x2a0);
  *(undefined8 *)((long)pvVar3 + 0x8c) = 0;
  *(undefined *)((long)pvVar3 + 0xbe) = 0;
  *(undefined *)((long)pvVar3 + 0x68) = 1;
  *(undefined *)((long)pvVar3 + 0xbc) = 1;
  *(undefined8 *)((long)pvVar3 + 0x74) = 0;
  *(undefined8 *)((long)pvVar3 + 0x6c) = 0;
  *(undefined8 *)((long)pvVar3 + 0x94) = 0xffffffffffffffff;
  *(undefined ***)((long)pvVar3 + 0x58) = &PTR__MaterialDesc_00fd99f8;
  *(char **)((long)pvVar3 + 0x60) = "UnnamedMaterial";
  *(undefined8 *)((long)pvVar3 + 0xa4) = 0x3f0000003fc00000;
  *(undefined8 *)((long)pvVar3 + 0x9c) = 0x3f0000003f000000;
  *(undefined8 *)((long)pvVar3 + 0x130) = 0;
  *(undefined8 *)((long)pvVar3 + 0x128) = 0;
  *(undefined4 *)((long)pvVar3 + 0xb8) = 0x3d0f5c29;
  *(undefined8 *)((long)pvVar3 + 0x110) = 0;
  *(undefined8 *)((long)pvVar3 + 0x108) = 0;
  *(undefined8 *)((long)pvVar3 + 0x160) = 0;
  *(undefined8 *)((long)pvVar3 + 0x158) = 0;
  *(undefined8 *)((long)pvVar3 + 0x120) = 0;
  *(undefined8 *)((long)pvVar3 + 0x118) = 0;
  *(undefined8 *)((long)pvVar3 + 0x140) = 0;
  *(undefined8 *)((long)pvVar3 + 0x138) = 0;
  *(undefined8 *)((long)pvVar3 + 400) = 0;
  *(undefined8 *)((long)pvVar3 + 0x188) = 0;
  *(undefined8 *)((long)pvVar3 + 0x150) = 0;
  *(undefined8 *)((long)pvVar3 + 0x148) = 0;
  *(undefined8 *)((long)pvVar3 + 0x170) = 0;
  *(undefined8 *)((long)pvVar3 + 0x168) = 0;
  *(undefined8 *)((long)pvVar3 + 0x84) = 0;
  *(undefined8 *)((long)pvVar3 + 0x7c) = 0;
  *(undefined8 *)((long)pvVar3 + 0x180) = 0;
  *(undefined8 *)((long)pvVar3 + 0x178) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1b0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1a8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1a0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x198) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1d0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1c8) = 0;
  *(undefined8 *)((long)pvVar3 + 0xb0) = 0x3f0000003f800000;
  *(undefined8 *)((long)pvVar3 + 0x1c0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1b8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1f0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1e8) = 0;
  *(undefined8 *)((long)pvVar3 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar3 + 200) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1e0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1d8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x210) = 0;
  *(undefined8 *)((long)pvVar3 + 0x208) = 0;
  *(undefined4 *)((long)pvVar3 + 0xd0) = 0;
  *(undefined8 *)((long)pvVar3 + 0x200) = 0;
  *(undefined8 *)((long)pvVar3 + 0x1f8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x230) = 0;
  *(undefined8 *)((long)pvVar3 + 0x228) = 0;
  *(undefined8 *)((long)pvVar3 + 0xe0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xd8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x220) = 0;
  *(undefined8 *)((long)pvVar3 + 0x218) = 0;
  *(undefined8 *)((long)pvVar3 + 0x250) = 0;
  *(undefined8 *)((long)pvVar3 + 0x248) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xe8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x240) = 0;
  *(undefined8 *)((long)pvVar3 + 0x238) = 0;
  *(undefined8 *)((long)pvVar3 + 0x270) = 0;
  *(undefined8 *)((long)pvVar3 + 0x268) = 0;
  *(undefined8 *)((long)pvVar3 + 0x100) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x260) = 0;
  *(undefined8 *)((long)pvVar3 + 600) = 0;
  *(undefined8 *)((long)pvVar3 + 0x290) = 0;
  *(undefined8 *)((long)pvVar3 + 0x288) = 0;
  *(undefined4 *)((long)pvVar3 + 0x298) = 0;
  *(undefined8 *)((long)pvVar3 + 0x280) = 0;
  *(undefined8 *)((long)pvVar3 + 0x278) = 0;
  *(void **)(this + 0x268) = pvVar3;
                    /* try { // try from 008fdaa0 to 008fdaa7 has its CatchHandler @ 008fdc7c */
  this_00 = (I3DShapePoolFactory *)operator_new(0x50);
                    /* try { // try from 008fdaac to 008fdaaf has its CatchHandler @ 008fdc60 */
  I3DShapePoolFactory::I3DShapePoolFactory(this_00);
  *(I3DShapePoolFactory **)(this + 0x270) = this_00;
                    /* try { // try from 008fdab4 to 008fdabb has its CatchHandler @ 008fdc7c */
  this_01 = (I3DIndexedMeshSetFactory *)operator_new(0x88);
                    /* try { // try from 008fdac0 to 008fdac3 has its CatchHandler @ 008fdc5c */
  I3DIndexedMeshSetFactory::I3DIndexedMeshSetFactory(this_01);
  *(I3DIndexedMeshSetFactory **)(this + 0x278) = this_01;
                    /* try { // try from 008fdac8 to 008fdacf has its CatchHandler @ 008fdc7c */
  this_02 = (I3DSceneGraphFactory *)operator_new(0x268);
                    /* try { // try from 008fdad4 to 008fdad7 has its CatchHandler @ 008fdc58 */
  I3DSceneGraphFactory::I3DSceneGraphFactory(this_02);
  *(I3DSceneGraphFactory **)(this + 0x280) = this_02;
                    /* try { // try from 008fdadc to 008fdae3 has its CatchHandler @ 008fdc7c */
  this_03 = (I3DAnimationSetsFactory *)operator_new(0x50);
                    /* try { // try from 008fdae8 to 008fdaeb has its CatchHandler @ 008fdc54 */
  I3DAnimationSetsFactory::I3DAnimationSetsFactory(this_03);
  *(I3DAnimationSetsFactory **)(this + 0x288) = this_03;
                    /* try { // try from 008fdaf0 to 008fdaf7 has its CatchHandler @ 008fdc7c */
  this_04 = (I3DDynamicsPoolFactory *)operator_new(0xb0);
                    /* try { // try from 008fdafc to 008fdaff has its CatchHandler @ 008fdc50 */
  I3DDynamicsPoolFactory::I3DDynamicsPoolFactory(this_04);
  *(I3DDynamicsPoolFactory **)(this + 0x290) = this_04;
                    /* try { // try from 008fdb04 to 008fdb0b has its CatchHandler @ 008fdc7c */
  this_05 = (I3DUserAttributesFactory *)operator_new(0x20);
                    /* try { // try from 008fdb10 to 008fdb13 has its CatchHandler @ 008fdc4c */
  I3DUserAttributesFactory::I3DUserAttributesFactory(this_05);
  *(I3DUserAttributesFactory **)(this + 0x298) = this_05;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = 0;
                    /* try { // try from 008fdb20 to 008fdb2f has its CatchHandler @ 008fdc7c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1f8));
  puVar2 = *(undefined4 **)(this + 0x20);
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x70] = (I3DLoad)0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x2a0] = (I3DLoad)0x0;
  this[0x240] = (I3DLoad)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (puVar2 < *(undefined4 **)(this + 0x28)) {
    *puVar2 = 1;
    *(undefined4 **)(this + 0x20) = puVar2 + 1;
  }
  else {
    pvVar3 = *(void **)(this + 0x18);
    __n = (long)puVar2 - (long)pvVar3;
    uVar1 = ((long)__n >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 008fdc34 to 008fdc4b has its CatchHandler @ 008fdc78 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)*(undefined4 **)(this + 0x28) - (long)pvVar3;
    uVar5 = (long)uVar4 >> 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008fdbbc to 008fdbbf has its CatchHandler @ 008fdc78 */
      __dest = operator_new(uVar1 << 2);
    }
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar2 = 1;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar3,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(undefined4 **)(this + 0x20) = puVar2 + 1;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1 * 4);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  return;
}


