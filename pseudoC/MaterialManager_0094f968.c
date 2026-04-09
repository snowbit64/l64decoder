// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaterialManager
// Entry Point: 0094f968
// Size: 168 bytes
// Signature: undefined __thiscall MaterialManager(MaterialManager * this)


/* MaterialManager::MaterialManager() */

void __thiscall MaterialManager::MaterialManager(MaterialManager *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(MaterialManager **)(this + 8) = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(MaterialManager **)(this + 0x20) = this + 0x28;
  *(undefined8 *)(this + 0x40) = 0;
  *(MaterialManager **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 0094f9c8 to 0094f9d3 has its CatchHandler @ 0094fa30 */
  Mutex::Mutex((Mutex *)(this + 0x50),true);
                    /* try { // try from 0094f9d8 to 0094f9e3 has its CatchHandler @ 0094fa20 */
  Mutex::Mutex((Mutex *)(this + 0x78),true);
                    /* try { // try from 0094f9e8 to 0094f9ef has its CatchHandler @ 0094fa10 */
  Mutex::Mutex((Mutex *)(this + 0xa0),true);
  *(undefined8 *)this = 0;
  return;
}


