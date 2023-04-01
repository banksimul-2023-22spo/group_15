const express = require('express');
const history = require('../models/history_model');
const router = express.Router();

router.get('/',
    function(request, response){
        history.getAll(function(error, dbResult) {
            if (error) {
                response.json(error);
            } else {
                console.log(dbResult);
                response.json(dbResult);
            }
        });
    });

router.get('/:page',
    function(request, response) {
      history.getPage(request.body.accountID, request.body.page, function(error, dbResult) {
        if(error){
          response.json(error);
        } else {
          response.json(dbResult);
        }
      });
    });

router.delete('/:id', 
    function(request, response) {
      history.delete(request.params.id, function(error, dbResult) {
        if (error) {
          response.json(error);
        } else {
          response.json(dbResult);
        }
      });
    });
    
module.exports=router;