using System.Collection;
using System.Collection.Generics;
using UnityEngine;

public class Player_Move_Prot : MonoBehaviour {
    public int playerSpeed = 10;
    private bool facingRight = false;
    public int playerJumpPower = 1250;
    private float moveX;
    public bool isGrounded;

    //Update is called one per frame
    void Update (){
        PlayerMove{};
    }
    void PlayerMove(){
        //CONTROLS
        moveX = Input.GetAxist("Horizontal");
        if(Input.GetButtonDown ("Jump") && isGrounded == true){
            Jump();
        }
        //ANIMATING
        //PLAYER DIRECTION
        if(moveX < 0.0f && facingRight == false){
            FlipPlayer();
        } else if(moveX > 0.0f && facingRight == true){
            FlipPlayer();
        }
        //PHYSICS
        gameObject.GetComponent<Rigidbody2D>().velocity = new Vector2 (moveX * playerSpeed,gameObject.GetComponent<Rigidbody2D>().velocity.y)
    }
    void Jump(){
        //JUMPING CODE
        GetComponent<Rigidbody2D>().AddForce (Vector2.up * playerJumpPower);
        isGrounded = false;
    }
    void FlipPlayer(){
        facingRight = !facingRight;
        Vector2 localScale = gameObject.transform.localScale;
        localScale.x *= -1;
        transform.localScale = localScale;
    }


    void OnCollisionEnter2D (Collision2D col){
        Debug.log ("Player has collided with " + col.collider.name);
        if(col.gameObject.tag == "ground"){
            isGrounded = true;
        }
    }
}
