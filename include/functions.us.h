#ifndef FUNCTIONS_US_H
#define FUNCTIONS_US_H

//gu
f32 sinf(f32);
f32 cosf(f32);
f32 __sinf(f32);
f32 __sqrtf(f32);
f32 __cosf(f32);

s32 Controller_Init(void);
void func_80030AEC(Actor*);
void Actors_Tick(void);
s32 IsRoomObjInvalid(RoomObject* obj);
s32 GetRoomObjCount(RoomObject* obj);
s32 IsRoomActInvalid(RoomActor* actor);
s32 GetRoomActCount(RoomActor* actor);
s32 IsCollectableInvalid(Collectable* collectable);
s32 GetCollectableCount(Collectable* collectable);
s32 IsRoomInvalid(RoomInstance* room);
s32 GetRoomCount(RoomInstance* room);
s32 IsSpriteActInvalid(SpriteActor* sprite);
s32 GetSpriteActCount(SpriteActor* sprite);
s32 func_800524CC(s32);
void func_80077BC4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void func_80077C10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void func_800BA954(s32 arg0);
void func_800BC1FC(s32 arg0);
void Controller_Zero(ContMain* cont);
s32 PlaySoundEffect(s32 id, f32* posX, f32* posY, f32* posZ, s32 arg4, s32 flag);
void func_800CC524(void); //func_800D34CC
void func_8002DDD8(UnkTempStruct arg0);
void func_8002E1D4(void); //func_8002E9F4
void func_8002E4AC(s32 arg0);


//84E0.c
void ActorInit_AntBulletHell(Actor* actor);
void ActorInit_AntTrio(Actor* actor);
void ActorInit_BattleModeSandCrab(Actor* actor);
void ActorInit_GreyAnt(Actor* actor);
void ActorInit_GreyAntSpawner(Actor* actor);
void ActorInit_RedAnt(Actor* actor);
void ActorInit_YellowAnt(Actor* actor);
void ActorInit_GreenAnt(Actor* actor);
void ActorInit_AntQueen(Actor* actor);
void ActorInit_AntQueenDrone(Actor* actor);
void ActorInit_WhiteBombSnake(Actor* actor);
void ActorInit_Grenade(Actor* actor);
void ActorInit_Missile(Actor* actor);
void ActorInit_Cannon(Actor* actor);
void ActorInit_Cannonball(Actor* actor);
void func_8003BB94(Actor* actor);
void ActorInit_Explosion(Actor* actor);
void ActorInit_Chomper(Actor* actor);
void ActorInit_SandCrab(Actor* actor);
void ActorInit_Vulture(Actor* actor);
void ActorInit_Arrows(Actor* actor);
void func_8003D338(Actor* actor);
void ActorInit_Armadillo(Actor* actor);
void ActorInit_Pogo(Actor* actor);
void ActorInit_Unk23(Actor* actor);
void ActorInit_IceCreamSandwich(Actor* actor);
void ActorInit_ChocoKid(Actor* actor);
void ActorInit_Unk1F(Actor* actor);
void ActorInit_Popcorn(Actor* actor);
void func_8003F8E8(Actor* actor);
void func_8003FFC8(Actor* actor);
void func_8003FFD8(Actor* actor);
void ActorInit_CakeBoss(Actor* actor);
void ActorInit_CueBall(Actor* actor);
void ActorInit_BilliardBall(Actor* actor);
void ActorInit_Unk2E(Actor* actor);
void ActorInit_Unk2F(Actor* actor);
void ActorInit_Cup(Actor* actor);
void ActorInit_Saucer(Actor* actor);
void ActorInit_MetalSheet(Actor* actor);
void ActorInit_Scroll(Actor* actor);
void ActorInit_RNGRoomSpawner(Actor* actor);
void ActorInit_Mirror(Actor* actor);
void ActorInit_BarrelFireSpawner(Actor* actor);
void ActorInit_BarrelFire(Actor* actor);
void ActorInit_FireSpitter(Actor* actor);
void ActorInit_Candles(Actor* actor);
void ActorInit_FireSpawner(Actor* actor);
void ActorInit_Fire(Actor* actor);
void ActorInit_Sandal(Actor* actor);
void ActorInit_GhostBoss(Actor* actor);
void ActorInit_GhostBossArmSegment(Actor* actor);
void ActorInit_GhostBossArmSpitter(Actor* actor);
void ActorInit_GhostBossShot(Actor* actor);
void ActorInit_SpiderSpawner(Actor* actor);
void ActorInit_Spider(Actor* actor);
void ActorInit_SpiderTrio(Actor* actor);
void ActorInit_GolemSpiderSpawner(Actor* actor);
void ActorInit_Golem(Actor* actor);
void ActorInit_Hedgehog(Actor* actor);
void ActorInit_Fish(Actor* actor);
void func_80046A4C(Actor* actor);
void ActorInit_LizardKongButterflySpawner(Actor* actor);
void ActorInit_LizardKongBoulder(Actor* actor);
void ActorInit_LizardKong(Actor* actor);
void ActorInit_PopcornBucketSpawner(Actor* actor);
void ActorInit_PopcornBucket(Actor* actor);
void ActorInit_Unk4E(Actor* actor);
void ActorInit_ChocoKidSpawner(Actor* actor);
void ActorInit_SpawnedChocoKid(Actor* actor);
void ActorInit_GreyAntSpawnerWrapper(Actor* actor);
void ActorInit_GreyAntWrapper(Actor* actor);
void ActorInit_BattleModeSandCrabSpawner(Actor* actor);
void ActorInit_BattleModeFireSpawner(Actor* actor);
void ActorInit_BattleModeFire(Actor* actor);
void ActorInit_BattleModeSaucerSpawner(Actor* actor);
void ActorInit_BattleModeSaucer(Actor* actor);
void ActorInit_Unk59(Actor* actor);
void ActorInit_Unk5A(Actor* actor);
void ActorInit_PowerUpSpawner(Actor* actor);
void ActorInit_FallingGreyAntSpawner(Actor* actor);
void ActorInit_FallingGreyAnt(Actor* actor);
void n_alSynFreeFX(Actor* actor);
void ActorInit_BulletHellAntSpawner(Actor* actor);
void ActorInit_UnkFireSpawner(Actor* actor);
void ActorInit_MissileSpawner(Actor* actor);
void func_80030784(Actor* arg0);
void func_8003086C(s32); //func_800312B0
void pickup_collide_func(s32 actorIndex);
void func_80030AEC(Actor*);

//5FF30.c
void ComputeBoundingBoxFromRects(Rect3D* rectA, Rect3D* rectB, Rect3D* rectOut);
void AdjustRectToVec3(Rect3D* r, Vec3f vec);
void Rect_Expand(Rect3D* r, f32 s);
void OrderRectBounds(Rect3D *rect);
s32 IfRectsIntersect(Rect3D* rectA, Rect3D* rectB);
s32 IsPointInRect(Vec3f point, Rect3D* rect);
void CalculateBoundingRectFromVectors(Vec3f vecA, Vec3f vecB, Rect3D* rect);
s32 func_8008695C(s32 arg0);
s32 Actor_PlaySound(Actor* actor, s32 sfxID, s32 unused1, s32 unused2);



//math.c
s32 Random(s32, s32);
f32 RandomF(void);
f32 tanf(f32);
f32 InterpolateAndClampArcSin(f32);
f32 AngleFromArcSin(f32);
f32 CalculateAngleOfVector(f32, f32);

//vector.c
void DummiedPrintf3(char* arg0, ...);
void WrapAngle(f32* angle);
s32 CompareWrappedAngles(f32 angle1, f32 angle2);
void func_800A7678(Poly* arg0);
void func_800D06B4(Poly *arg0, s32 arg1);
void OnlyCheckPolyInfoLevel(Poly* arg0, s32 arg1, char* arg2);
void func_800D0AE4(Poly* arg0, s32 arg1);
Vec3f* ProjectOnPolygon(Vec3f* vec, f32 perspX, f32 perspY, f32 perspZ, Poly* poly);
Vec3f* WorldToLocal(Vec3f* outVec, Vec3f vec, Poly* poly);
Vec3f* LocalToWorld(Vec3f* outVec, Vec3f vec, Poly* poly);
s32 IsInsidePolygon(Vec3f vec, Poly* poly);
s32 IsOnPolygon(Vec3f vec, Poly* poly);
Vec3f* RotateVector3D(Vec3f* outVec, Vec3f inpVec, f32 theta, s32 rotateAroundAxesIndex);
s32 IsNearPoint(Vec3f vec1, Vec3f vec2, f32 approxRadius);
s32 Vec3f_Equals(Vec3f vec1, Vec3f vec2);
s32 Vec3f_EqualsCopy(Vec3f vec1, Vec3f vec2);
void Vec3f_Set(Vec3f* vec, f32 x, f32 y, f32 z);
void Vec3f_Zero(Vec3f* vec);

//B35B0.c
f32 Vec3f_Normalize(Vec3f* vec);
Vec3f* Vec3f_Lerp(Vec3f* outVec, Vec3f vecOne, Vec3f vecTwo, f32 scalar);
void CartesianToSpherical(Vec3f inputVec, f32* radius, f32* theta, f32* phi);
Vec3f* SphericalToCartesian(Vec3f* inputVec, f32 radius, f32 theta, f32 phi);
void Vec3f_Print(Vec3f v);

//poly.c
void ClearPolygon(void);
void func_800C2434(Collider*);
void func_800C2634(Collider* arg0);
void func_800C2658(Collider* arg0);
void func_800C2678(Rect3D*, s32, s32);
s32 func_800C275C(Rect3D* arg0, Collider* arg1);
s32 IfPolyBoundIntersectsRect(Poly* poly, Rect3D* rect);
f32 Distance3DTo2DProjectedXY(Vec3f vecA, Vec2f vecB);
void DistanceWithLine(Vec3f point, Vec2f lineStart, Vec2f lineEnd, f32* distance, Vec3f* closestPoint3D, Poly* polygon);
void MinimunDistance(Vec3f arg0, Poly* polygon, UnkMinDistance arg5);
Vec3f* func_800C34E4(Vec3f* arg0, Vec3f arg1, UnkArg4* arg4, f32 arg5);
void func_800C3664(Vec3f*, Vec3f, f32, s32);
Collider* SearchPolygonBetween(Vec3f, Vec3f, s32, s32, s32);
Collider* func_800C3EB8(Vec3f, f32, f32);
void func_800C4B1C(Actor*);
void func_800C4C38(Actor*);
void func_800C569C(Vec3f vec);
void func_800C56D0(Actor*, Vec3f, s32);
void func_800C5CBC(Actor* actor);
void func_800C5D3C(Actor*);
void CalcWalkingEnemyNext(Actor*);
void CalcJumpingEnemyNext(Actor*);
void func_800C7AEC(Actor*);
void CalcEnemyNextPosition(Actor* actor);
void func_800C8DB4(PlayerActor* arg0);
void func_800C8F70(PlayerActor* player);
void func_800C8F88(Vec3f* arg0);
Vec3f* func_800C90E8(Vec3f* arg0, Collider* arg1);
void func_800CC524(void);
void func_800CC874(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800CD52C(s32 arg0, s32 arg1, Poly* arg2, Vec3f* arg3, Vec3f* arg4);
void func_800CE5B0(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void ApplyRotationToVector(Vec3f* vecA, Vec3f* vecB, f32 degreesAngle);
void func_800CFB64(s32, PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void SetCameraParameters(void);
void func_800D02EC(f32 x1, f32 x2, f32 y1, f32 y2, f32 z1, f32 z2);
s32 func_800D7248(f32 x, f32 y, f32 z, f32 arg3, f32 arg4, f32* outX, f32* arg6, f32* arg7);
s32 func_800D03E0(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2, f32* outX, f32* outY, f32* outZ);
void func_800D04C0(f32* x, f32* y, f32* z, f32 arg3);

//sprite.c
void printUISprite(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8);
void setPrimColor(u8 r, u8 g, u8 b, u8 a);
void SetTextGradient(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, u8 argE, u8 argF);
void PrintTextWrapper(f32 arg0, f32 arg1, f32 arg2, f32 arg3, char* txt, s32 font);
u32 Effect_PlayerEyes_Init(s32, s32, f32, s32);
void Effect_TypeA_Init(f32 posX, f32 posY, f32 posZ, s32 numParts, s32 size);
Effect* Effect_TypeC_Init(f32 posX, f32 posY, f32 posZ, f32 targetX, f32 targetY, f32 targetZ, u8 colorR, u8 colorG, u8 colorB, u8 colorA, s32 numParts, s32 spriteID);


#endif
