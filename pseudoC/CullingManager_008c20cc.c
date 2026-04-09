// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CullingManager
// Entry Point: 008c20cc
// Size: 100 bytes
// Signature: undefined __thiscall CullingManager(CullingManager * this)


/* CullingManager::CullingManager() */

void __thiscall CullingManager::CullingManager(CullingManager *this)

{
  CullingGrid2D::CullingGrid2D((CullingGrid2D *)this);
                    /* try { // try from 008c20e8 to 008c20ef has its CatchHandler @ 008c2164 */
  CullingGrid2D::CullingGrid2D((CullingGrid2D *)(this + 0x40));
                    /* try { // try from 008c20f4 to 008c20fb has its CatchHandler @ 008c2154 */
  CullingGrid2D::CullingGrid2D((CullingGrid2D *)(this + 0x80));
                    /* try { // try from 008c2100 to 008c2107 has its CatchHandler @ 008c2144 */
  SimpleCullingStructure::SimpleCullingStructure((SimpleCullingStructure *)(this + 0xc0));
                    /* try { // try from 008c210c to 008c210f has its CatchHandler @ 008c2130 */
  DecalCullingStructure::DecalCullingStructure((DecalCullingStructure *)(this + 0xd8));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  return;
}


