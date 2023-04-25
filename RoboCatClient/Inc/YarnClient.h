class YarnClient : public Yarn
{
public:
	static	GameObjectPtr	StaticCreate()		{ return GameObjectPtr( new YarnClient() ); }

	virtual void		Read( InputMemoryBitStream& inInputStream ) override;

	virtual void Update() override;

protected:
	YarnClient();

private:

	float mTimeToDie;
	SpriteComponentPtr	mSpriteComponent;
};