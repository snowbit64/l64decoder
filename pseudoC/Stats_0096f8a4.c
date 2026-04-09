// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Stats
// Entry Point: 0096f8a4
// Size: 196 bytes
// Signature: undefined __thiscall Stats(Stats * this)


/* TextureStreamingManager::Stats::Stats() */

void __thiscall TextureStreamingManager::Stats::Stats(Stats *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x410) = 0x80;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x828) = 0;
  *(undefined4 *)(this + 0x830) = 0x80;
  *(undefined8 *)(this + 0x840) = 0;
  *(undefined8 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x850) = 0;
  *(undefined8 *)(this + 0x848) = 0;
  *(undefined8 *)(this + 0x860) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  *(undefined8 *)(this + 0x870) = 0;
  *(undefined8 *)(this + 0x868) = 0;
  *(undefined8 *)(this + 0x880) = 0;
  *(undefined8 *)(this + 0x878) = 0;
  *(undefined8 *)(this + 0x890) = 0;
  *(undefined8 *)(this + 0x888) = 0;
  *(undefined8 *)(this + 0x8a0) = 0;
  *(undefined8 *)(this + 0x898) = 0;
  *(undefined8 *)(this + 0x8a8) = 0;
  Mutex::Mutex((Mutex *)(this + 0x8b0),true);
  memset(this + 0x8d8,0,0x970);
  *(undefined4 *)(this + 0x1240) = 100;
                    /* try { // try from 0096f924 to 0096f92f has its CatchHandler @ 0096f978 */
  Mutex::Mutex((Mutex *)(this + 0x1248),true);
  *(undefined8 *)(this + 0x1278) = 0;
  *(undefined8 *)(this + 0x1270) = 0;
  *(undefined8 *)(this + 0x1280) = 0;
                    /* try { // try from 0096f944 to 0096f94b has its CatchHandler @ 0096f968 */
  Mutex::Mutex((Mutex *)(this + 0x1288),true);
  *(undefined8 *)(this + 0x12b8) = 0;
  *(undefined8 *)(this + 0x12b0) = 0;
  *(undefined8 *)(this + 0x12c0) = 0;
  return;
}


