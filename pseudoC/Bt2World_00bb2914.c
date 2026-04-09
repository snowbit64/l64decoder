// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2World
// Entry Point: 00bb2914
// Size: 220 bytes
// Signature: undefined __thiscall ~Bt2World(Bt2World * this)


/* Bt2World::~Bt2World() */

void __thiscall Bt2World::~Bt2World(Bt2World *this)

{
  *(undefined ***)this = &PTR__Bt2World_00feb330;
  (**(code **)**(undefined8 **)(this + 0x2a0))();
                    /* try { // try from 00bb294c to 00bb294f has its CatchHandler @ 00bb2a00 */
  btAlignedFreeInternal(*(void **)(this + 0x2a0));
  if ((*(void **)(this + 0x278) != (void *)0x0) && (this[0x280] != (Bt2World)0x0)) {
                    /* try { // try from 00bb2960 to 00bb2963 has its CatchHandler @ 00bb29fc */
    btAlignedFreeInternal(*(void **)(this + 0x278));
  }
  *(undefined8 *)(this + 0x278) = 0;
  this[0x280] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x26c) = 0;
  if ((*(void **)(this + 0x218) != (void *)0x0) && (this[0x220] != (Bt2World)0x0)) {
                    /* try { // try from 00bb2988 to 00bb298b has its CatchHandler @ 00bb29f8 */
    btAlignedFreeInternal(*(void **)(this + 0x218));
  }
  this[0x220] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x20c) = 0;
  if ((*(void **)(this + 0x1f8) != (void *)0x0) && (this[0x200] != (Bt2World)0x0)) {
                    /* try { // try from 00bb29a8 to 00bb29ab has its CatchHandler @ 00bb29f4 */
    btAlignedFreeInternal(*(void **)(this + 0x1f8));
  }
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1ec) = 0;
  this[0x200] = (Bt2World)0x1;
  if ((*(void **)(this + 0x1d8) != (void *)0x0) && (this[0x1e0] != (Bt2World)0x0)) {
                    /* try { // try from 00bb29cc to 00bb29cf has its CatchHandler @ 00bb29f0 */
    btAlignedFreeInternal(*(void **)(this + 0x1d8));
  }
  this[0x1e0] = (Bt2World)0x1;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1cc) = 0;
  btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld((btDiscreteDynamicsWorld *)this);
  return;
}


